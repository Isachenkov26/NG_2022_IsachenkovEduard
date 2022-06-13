#include "calculator.h"
#include "ui_calculator.h"

double first_Number, second_Number;
QString symbols;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    connect(ui->bOne, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bTwo, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bThird, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bFour, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bFive, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bSix, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bSeven, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bEight, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bNine, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bZero, &QPushButton::clicked, this, &Calculator::firstNumber);
    connect(ui->bDeleted, &QPushButton::clicked, this, &Calculator::clear);
    connect(ui->bPoint, &QPushButton::clicked, this, &Calculator::point);
    connect(ui->bPlus, &QPushButton::clicked, this, &Calculator::clickPlus);
    connect(ui->bMinus, &QPushButton::clicked, this, &Calculator::clickMinus);
    connect(ui->bMultiplication, &QPushButton::clicked, this, &Calculator::clickMultiplication);
    connect(ui->bDivision, &QPushButton::clicked, this, &Calculator::clickDivision);
    connect(ui->bResult, &QPushButton::clicked, this, &Calculator::exactly);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::firstNumber()
{
    QPushButton *button = (QPushButton *)sender();
    ui->lResult->setText(ui->lResult->text() + button->text());
}

void Calculator::clear()
{
    ui->lResult->setText("");
}

void Calculator::point()
{
    if(!(ui->lResult->text().contains('.'))){
        ui->lResult->setText(ui->lResult->text() + ".");
    }
}

void Calculator::clickPlus()
{
    first_Number = ui->lResult->text().toDouble();
    ui->lResult->setText("");
    symbols = "+";
}

void Calculator::clickMinus()
{
    first_Number = ui->lResult->text().toDouble();
    ui->lResult->setText("");
    symbols = "-";
}

void Calculator::clickMultiplication()
{
    first_Number = ui->lResult->text().toDouble();
    ui->lResult->setText("");
    symbols = "*";
}

void Calculator::clickDivision()
{
    first_Number = ui->lResult->text().toDouble();
    ui->lResult->setText("");
    symbols = "/";
}

void Calculator::exactly()
{
    second_Number = ui->lResult->text().toDouble();
    QString string;
    if(symbols == "+"){
        string = QString::number(first_Number + second_Number);
        ui->lResult->setText(string);
    }
    else if(symbols  == "-"){
        string = QString::number(first_Number - second_Number);
        ui->lResult->setText(string);
    }
    else if(symbols  == "*"){
        string = QString::number(first_Number * second_Number);
        ui->lResult->setText(string);
    }
    else if(symbols  == "/"){
        string = QString::number(first_Number / second_Number);
        ui->lResult->setText(string);
    }
}
