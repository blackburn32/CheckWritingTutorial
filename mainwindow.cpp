#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    QPixmap image("C:/Check.jpg");
    ui->checkImage->setPixmap(image);
    ui->amountBox->hide();
    ui->recipientBox->hide();
    ui->writtenAmountBox->hide();
    ui->memoBox->hide();

    ui->tutorialText->setText("First thing's first, you need to write today's date on the date line!");

    date = "11/24/16";
    amount = "23.04";
    writtenAmount = "twenty-three and 04/100";
    recipient = "Mega Food Store";
    memo = "Turkey";
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * This slot watches for the text box to be typed into.
 * We can check if the text matches a regex to move forward in the tutorial
 */
void MainWindow::on_dateBox_textChanged()
{
    ui->tutorialText->setText("Write your date in this format: mm/dd/yy. Please write: 11/24/16");
    if(isDate(ui->dateBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now write the amount of the check in the box below the date line.");
        ui->dateBox->setEnabled(false);
        ui->amountBox->setEnabled(true);
        ui->amountBox->show();
    }
}

void MainWindow::on_amountBox_textChanged()
{
    ui->tutorialText->setText("Write in the number for the check amount in this format: XX.XX. Please write: 23.04");
    if(isAmount(ui->amountBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now write out the amount with words on the line above the word 'Dollars'.");
        ui->amountBox->setEnabled(false);
        ui->writtenAmountBox->setEnabled(true);
        ui->writtenAmountBox->show();
    }
}

void MainWindow::on_writtenAmountBox_textChanged()
{
    ui->tutorialText->setText("Write in the written amount of the check amount in the format: number and XX/100. Please write: twenty-three and 04/100");
    if(isWrittenAmount(ui->writtenAmountBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now write in the receiver of the check on the line after 'Pay to the Order of'.");
        ui->writtenAmountBox->setEnabled(false);
        ui->recipientBox->setEnabled(true);
        ui->recipientBox->show();
    }
}

void MainWindow::on_recipientBox_textChanged()
{
    ui->tutorialText->setText("Write in the receiver of the check. Please write: Mega Food Store");
    if(isRecipient(ui->recipientBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now write the purpose of the check on the line after 'For'.");
        ui->recipientBox->setEnabled(false);
        ui->memoBox->setEnabled(true);
        ui->memoBox->show();
    }
}

void MainWindow::on_memoBox_textChanged()
{
    ui->tutorialText->setText("Write in the purpose of the check. Please write: Turkey");
    if(isMemo(ui->memoBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now all there is left is to sign on the line before 'MP'");
        ui->memoBox->setEnabled(false);
    }
}

bool MainWindow::isDate(QString _date)
{
    return _date == date;
}

bool MainWindow::isAmount(QString _amount)
{
    return _amount == amount;
}

bool MainWindow::isWrittenAmount(QString _writtenAmount)
{
    return _writtenAmount == writtenAmount;
}

bool MainWindow::isRecipient(QString _recipient)
{
    return _recipient == recipient;
}

bool MainWindow::isMemo(QString _memo)
{
    return _memo == memo;
}
