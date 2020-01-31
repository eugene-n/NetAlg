#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GraphWidget *widget = new GraphWidget;
    MainWindow w;
    w.setCentralWidget(widget);

    //self.setCentralWidget(self.mapview)
    //так и делаю, оно не разворачивается!
    //разобрался. Прикол был с eventFilter

    //w.setWindowFlags(Qt::Dialog);
    w.setFixedSize(1044, 880);
    w.show();
    return a.exec();
}
