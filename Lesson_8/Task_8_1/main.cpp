#include "basicmusicplayer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BasicMusicPlayer w;
    w.resize(1000, 300);
    w.show();
    return a.exec();
}
