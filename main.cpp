#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "Backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Backend _backend;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("_backend", &_backend);

    engine.loadFromModule("AO_Evrika", "Main");

    return app.exec();
}
