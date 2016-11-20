#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QRegExp>

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
    ui->tutorialText->setText("Write your date in this format: mm/dd/yy");
    if(isDate(ui->dateBox->toPlainText()))
    {
        ui->tutorialText->setText("Good job, now write the amount of the check in the box below the date line.");
        ui->dateBox->setEnabled(false);
        ui->amountBox->setEnabled(true);
        ui->amountBox->show();
    }
}

/**
 * This is an example of a regex in QT, pretty straight-forward
 */
bool MainWindow::isDate(QString date)
{
    QRegExp regex("[0-1][0-9]");
    return regex.indexIn(date) != -1;
}
