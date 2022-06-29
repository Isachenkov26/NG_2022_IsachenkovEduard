#include "basicmusicplayer.h"
#include "ui_basicmusicplayer.h"

int index;

BasicMusicPlayer::BasicMusicPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BasicMusicPlayer)
{
    ui->setupUi(this);

    mPlayer = new QMediaPlayer();
    mPlayList = new QMediaPlaylist();

    ui->lineEdit->setReadOnly(true);
    connect(ui->bFind, &QPushButton::clicked,this,&BasicMusicPlayer::FindSong);
    connect(ui->bPlay, &QPushButton::clicked,this,&BasicMusicPlayer::Play);
    connect(ui->bForward,&QPushButton::clicked, mPlayList,&QMediaPlaylist::next);
    connect(ui->bBackward, &QPushButton::clicked, mPlayList, &QMediaPlaylist::previous);
    connect(mPlayer, &QMediaPlayer::currentMediaChanged,this, &BasicMusicPlayer::CurrentMusicChanged);

    connect(ui->sliderVolume, &QSlider::valueChanged, mPlayer, &QMediaPlayer::setVolume);
    connect(mPlayer, &QMediaPlayer::volumeChanged, this, &BasicMusicPlayer::Volume);
    connect(ui->lPlaylist, &QListWidget::itemClicked, this, &BasicMusicPlayer::ClickedMusic);

    mPlayer->setPlaylist(mPlayList);
}

BasicMusicPlayer::~BasicMusicPlayer()
{
    delete ui;
}

void BasicMusicPlayer::Play()
{
  mPlayer->play();
  ui->bPlay->setText("||");
  disconnect(ui->bPlay, &QPushButton::clicked,this,&BasicMusicPlayer::Play);
  connect(ui->bPlay, &QPushButton::clicked,this,&BasicMusicPlayer::Pause);
}

void BasicMusicPlayer::Pause()
{
    mPlayer->pause();
    ui->bPlay->setText("|>");
    disconnect(ui->bPlay, &QPushButton::clicked,this,&BasicMusicPlayer::Pause);
    connect(ui->bPlay, &QPushButton::clicked,this,&BasicMusicPlayer::Play);
}

void BasicMusicPlayer::FindSong()
{
    QStringList song = QFileDialog::getOpenFileNames(this, tr("Play Music"), QDir::homePath(),tr("music (*.mp3)"));
    for(int i = 0; i < song.length(); i++){
        mPlayList->addMedia(QUrl::fromLocalFile(song[i]));
        ui->lPlaylist->addItem(song[i]);
        ui->lineEdit->setText(song[i]);
    }
}

void BasicMusicPlayer::CurrentMusicChanged(QMediaContent song)
{
    ui->lineEdit->setText(song.request().url().toString());
}

void BasicMusicPlayer::Volume(int volume)
{
    ui->lVolume->setNum(volume);
}

void BasicMusicPlayer::ClickedMusic()
{
    index = ui->lPlaylist->currentRow();
    mPlayList->setCurrentIndex(index);
}
