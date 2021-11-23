// About dialog class for the PhotoCastle application.

#include "aboutdialog.h"
#include "ui_aboutdialog.h"

aboutDialog::aboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutDialog)
{
    ui->setupUi(this);
    setFixedSize(size());
    ui->creditsWidget->setVisible(false);

    ui->devTextArea->setText(tr(""));
    ui->graphicsTextArea->setText(tr("Main icon"));

    ui->translateTextArea->setText(tr(""));
    ui->contribTextArea->setText(tr(""));

    QString appName = qApp->applicationName().replace("p","P");
    ui->appName->setText(appName);
    QFont font;
    font.setPointSize(14);
    ui->appName->setFont(font);
    ui->appVersion->setText(qApp->applicationVersion()+tr(" Version 1.0"));
    ui->appDescription->setText(tr("A simple but advanced editor."));
    ui->appUrl->setText(tr("<a href='https://www.PhotoCastle.io'>https://www.PhotoCastle.io</a>"));
}

aboutDialog::~aboutDialog()
{
    delete ui;
}

void aboutDialog::on_closeButton_clicked()
{
    close();
}

void aboutDialog::on_creditsButton_clicked()
{
    if (ui->creditsWidget->isVisible()==false)
    {
        ui->creditsWidget->setVisible(true);
    }
    else if (ui->creditsWidget->isVisible()==true)
    {
        ui->creditsWidget->setVisible(false);
    }

}
