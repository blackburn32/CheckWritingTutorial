#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateBox->hide();
    ui->amountBox->hide();
    ui->recipientBox->hide();
    ui->writtenAmountBox->hide();
    ui->memoBox->hide();
    ui->signatureBox->hide();

    currentStep = 0;
    tutorial[0] = "You've probably heard about checks, but do you know what they're used for?";
    tutorial[1] = "Most people only use them to pay their bills, but certain establishments will accept checks just like they accept cash and credit cards.";
    tutorial[2] = "In this lesson, you're going to learn how to fill out a check so that you can pay for the turkey you need to cook a delicious Thanksgiving meal.";
    tutorial[3] = "First thing's first, you need to write today's date on the date line! Please write: 11/24/16 in the box.";
    tutorial[4] = "Good job, now you will write the amount of the check in the box below the date line.";
    tutorial[5] = "Great job, now you will write out that same amount but in words on the line before 'Dollars'";
    tutorial[6] = "Super job, now you will write down who the check is being paid out to.";
    tutorial[7] = "Sweet! The memo section is where you write down what the check is for.";
    tutorial[8] = "All that's left now is to sign your name on the final line!";
    tutorial[9] = "Now you're a pro! Press close to return to the main menu.";
    date = "11/24/16";
    amount = "23.04";
    writtenAmount = "twenty-three and 04/100";
    recipient = "Mega Food Store";
    memo = "Turkey";

    ui->tutorialText->setText(tutorial[currentStep]);
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::on_continueButton_clicked()
{
    if(currentStep == 9)
        QApplication::quit();
    currentStep++;
    ui->tutorialText->setText(tutorial[currentStep]);
    if(currentStep == 3)
    {
        ui->continueButton->setEnabled(false);
        ui->dateBox->show();
    }
}

void MainWindow::on_dateBox_selectionChanged()
{
    ui->tutorialText->setText("Write your date in this format: mm/dd/yy. Please write: 11/24/16");
}

void MainWindow::on_dateBox_textChanged()
{
    if(isDate(ui->dateBox->toPlainText()))
    {
        currentStep++;
        ui->tutorialText->setText(tutorial[currentStep]);
        ui->dateBox->setEnabled(false);
        ui->amountBox->setEnabled(true);
        ui->amountBox->show();
    }
}

void MainWindow::on_amountBox_selectionChanged()
{
    ui->tutorialText->setText("Write in the number for the check amount in this format: XX.XX. Please write: 23.04");
}

void MainWindow::on_amountBox_textChanged()
{
    if(isAmount(ui->amountBox->toPlainText()))
    {
        currentStep++;
        ui->tutorialText->setText(tutorial[currentStep]);
        ui->amountBox->setEnabled(false);
        ui->writtenAmountBox->setEnabled(true);
        ui->writtenAmountBox->show();
    }
}

void MainWindow::on_writtenAmountBox_selectionChanged()
{
    ui->tutorialText->setText("Write down the amount of the check in words, please write: twenty-three and 04/100");
}

void MainWindow::on_writtenAmountBox_textChanged()
{
    if(isWrittenAmount(ui->writtenAmountBox->toPlainText()))
    {
        currentStep++;
        ui->tutorialText->setText(tutorial[currentStep]);
        ui->writtenAmountBox->setEnabled(false);
        ui->recipientBox->setEnabled(true);
        ui->recipientBox->show();
    }
}

void MainWindow::on_recipientBox_selectionChanged()
{
    ui->tutorialText->setText("Write in the receipient of the check. Please write: Mega Food Store");

}
void MainWindow::on_recipientBox_textChanged()
{
    if(isRecipient(ui->recipientBox->toPlainText()))
    {
        currentStep++;
        ui->tutorialText->setText(tutorial[currentStep]);
        ui->recipientBox->setEnabled(false);
        ui->memoBox->setEnabled(true);
        ui->memoBox->show();
    }
}

void MainWindow::on_memoBox_selectionChanged()
{
    ui->tutorialText->setText("Write in the purpose of the check. Please write: Turkey");
}

void MainWindow::on_memoBox_textChanged()
{
    if(isMemo(ui->memoBox->toPlainText()))
    {
        currentStep++;
        ui->tutorialText->setText(tutorial[currentStep]);
        ui->memoBox->setEnabled(false);
        ui->signatureBox->setEnabled(true);
        ui->signatureBox->show();
    }
}

void MainWindow::on_signatureBox_selectionChanged()
{
    ui->tutorialText->setText("Write your name, and then press continue when you're finished.");
    ui->continueButton->setEnabled(true);
}
