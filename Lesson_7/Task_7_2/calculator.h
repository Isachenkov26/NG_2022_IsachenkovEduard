#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

public slots:
    void firstNumber();
    void clear();
    void point();
    void clickPlus();
    void clickMinus();
    void clickMultiplication();
    void clickDivision();
    void exactly();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
