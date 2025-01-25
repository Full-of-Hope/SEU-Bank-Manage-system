#include "bank.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bank w;
    w.show();

    return a.exec();
}
