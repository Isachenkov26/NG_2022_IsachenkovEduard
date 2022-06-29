#ifndef BASICMUSICPLAYER_H
#define BASICMUSICPLAYER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
namespace Ui { class BasicMusicPlayer; }
QT_END_NAMESPACE

class BasicMusicPlayer : public QMainWindow
{
    Q_OBJECT

public:
    BasicMusicPlayer(QWidget *parent = nullptr);
    ~BasicMusicPlayer();

private slots:
    void Play();
    void Pause();
    void FindSong();
    void CurrentMusicChanged(QMediaContent song);
    void Volume(int volume);
    void ClickedMusic();

private:
    Ui::BasicMusicPlayer *ui;
    QMediaPlayer *mPlayer;
    QMediaPlaylist *mPlayList;
};
#endif // BASICMUSICPLAYER_H
