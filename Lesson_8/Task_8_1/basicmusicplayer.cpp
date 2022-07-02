#include "basicmusicplayer.h"
#include "ui_basicmusicplayer.h"

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
    QString path = QFileDialog::getExistingDirectory(this, tr("Play Music"), QDir::homePath());
    QString name = "*.mp3";
    QStringList filters;
    filters << name;
    QDir rootDir(path);
    QFileInfoList list = rootDir.entryInfoList(filters);
    for(int i = 0; i < list.count(); i++){
        QFileInfo tmpFileInfo = list.at(i);
        if(tmpFileInfo.isDir()){
            QString fileName = tmpFileInfo.fileName();
            ui->lPlaylist->addItem(fileName);
            ui->lineEdit->setText(path + '/' + fileName);
            mPlayList->addMedia(QUrl::fromLocalFile(path + '/' + fileName));
        }
        else if(tmpFileInfo.isFile()){
            QString fileName = tmpFileInfo.fileName();
            ui->lPlaylist->addItem(fileName);
            ui->lineEdit->setText(path + '/' + fileName);
            mPlayList->addMedia(QUrl::fromLocalFile(path + '/' + fileName));
        }
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
    int index = ui->lPlaylist->currentRow();
    mPlayList->setCurrentIndex(index);
}
