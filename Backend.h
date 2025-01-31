#include <QFile>
#include <QObject>
#include <QTextStream>

class Backend : public QObject
{
    Q_OBJECT

public:
    explicit Backend(QObject *parent = nullptr)
        : QObject(parent)
    {}

public:
    Q_INVOKABLE void createTextFile()
    {
        QFile file("/Users/Shared/file.txt");

        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream outLog(&file);

            outLog << "Миру мир!";

            file.close();
        }
    }
};
