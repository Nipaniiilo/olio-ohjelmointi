#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass ObjEx;
    ObjEx.startToWait();

    return a.exec();
}
