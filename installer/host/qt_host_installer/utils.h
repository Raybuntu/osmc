#include <QString>
#include <QString>
#include <QDateTime>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTranslator>
#include <QApplication>

namespace utils
{
    void writeLog(QString strLog);
    void displayError(QString title, QString message);
}
