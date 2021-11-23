// PhotoCastle main program is found here.
#include <QDir>
#include <QtSingleApplication>
#include <QStandardPaths>

#include "photocastlewindow.h"
#include "photocastlesettings.h"

int main(int argc, char *argv[])
{
    QtSingleApplication app("PhotoCastle", argc, argv);

    if(!app.isRunning())
    {
        // App details
        app.setApplicationName("PhotoCastle");
        app.setApplicationVersion("1.0");

        // Setup Default settings
        QString loc = QStandardPaths::locate(QStandardPaths::ConfigLocation, QString(), QStandardPaths::LocateDirectory)+"PhotoCastle";
        if(!QDir(loc).exists())
        {
            SETTINGS->setDefaultSettings();
        }

        MainWindow Working;
        Working.show();

        // Pass filenames to be opened
        if(argc > 1)
        {
            for (int i = 1; i < argc; ++i)
            {
                Working.handleMessage(QString(argv[i]));
            }
        }

        app.setActivationWindow(&Working, true);
        QObject::connect(&app, SIGNAL(messageReceived(QString)), &Working, SLOT(handleMessage(QString)));

        return app.exec();
    }
    else
    {
        if(argc > 1)
        {
            for (int i = 1; i < argc; ++i)
            {
                app.sendMessage(QString(argv[i]));
            }
        }
    }
    return 0;
}
