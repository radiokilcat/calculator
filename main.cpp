#include "Calculator.h"

#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Calculator calculator;

    calculator.setWindowTitle("Calculator");
    calculator.resize(500, 500);
    calculator.show();

    return a.exec();
}
