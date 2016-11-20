#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_dateBox_textChanged();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    bool isDate(QString date);
};

#endif // MAINWINDOW_H
