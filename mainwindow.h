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
    void on_amountBox_textChanged();
    void on_writtenAmountBox_textChanged();
    void on_recipientBox_textChanged();
    void on_memoBox_textChanged();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    bool isDate(QString _date);
    bool isAmount(QString _amount);
    bool isWrittenAmount(QString _writtenAmount);
    bool isRecipient(QString _recipient);
    bool isMemo(QString _memo);

    QString date;
    QString amount;
    QString writtenAmount;
    QString recipient;
    QString memo;
};

#endif // MAINWINDOW_H
