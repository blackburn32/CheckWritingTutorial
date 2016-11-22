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
    void on_dateBox_selectionChanged();
    void on_amountBox_selectionChanged();
    void on_recipientBox_selectionChanged();
    void on_writtenAmountBox_selectionChanged();
    void on_memoBox_selectionChanged();
    void on_continueButton_clicked();

    void on_signatureBox_selectionChanged();

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

    QString date, amount, writtenAmount, recipient, memo, tutorial[10];
    int currentStep;
};

#endif // MAINWINDOW_H
