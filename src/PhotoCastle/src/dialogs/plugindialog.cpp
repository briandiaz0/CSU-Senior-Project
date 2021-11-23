#include "plugindialog.h"
#include "ui_plugindialog.h"

//#include <QDebug>
#include <QDir>
#include <QStandardPaths>

PluginDialog::PluginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PluginDialog)
{
    ui->setupUi(this);
    setFixedSize(size());

    QString loc = QStandardPaths::locate(QStandardPaths::ConfigLocation, QString(), QStandardPaths::LocateDirectory)+"PhotoCastle.io/plugins";
    QDir dir(loc);

    if (!dir.exists())
    {
        //qWarning("Cannot find the plugins directory");
    }
    else if(dir.exists() && dir.entryList(QDir::NoDotAndDotDot|QDir::AllEntries).count() == 0)
    {
        ui->listWidget->addItem(QString(tr("No plugins installed")));
    }
    else
    {
        ui->listWidget->addItems(dir.entryList(QDir::NoDotAndDotDot|QDir::AllEntries));
    }

    int count = ui->listWidget->count();
    for(int i = 0; i < count; i++)
    {
      QListWidgetItem *item = ui->listWidget->item(i);
      item->setSizeHint(QSize(item->sizeHint().width(), 50));
    }
}

PluginDialog::~PluginDialog()
{
    delete ui;
}
