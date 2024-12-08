#include "basic_calculator.h"
#include "ui_basic_calculator.h"

// variable for first operand
double first_number;

// bool for checking second input
bool userIsTypingSecondNumber = false;

basic_calculator::basic_calculator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::basic_calculator)
{
    ui->setupUi(this);

    // digits
    connect(ui->zero_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->one_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->two_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->three_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->four_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->five_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->six_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->seven_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->eight_button, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->nine_button, SIGNAL(released()),this,SLOT(digit_pressed()));

    // binary operators
    connect(ui->add_button, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->subtract_button, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->multiply_button, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->divide_button, SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    // make the binary buttons such that we can check them as bool when operating
    ui->add_button->setCheckable(true);
    ui->subtract_button->setCheckable(true);
    ui->multiply_button->setCheckable(true);
    ui->divide_button->setCheckable(true);
}

basic_calculator::~basic_calculator()
{
    delete ui;
}

void basic_calculator::digit_pressed()
{
    //qDebug() << "test";

    // stores the pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // makes a variable (double) to concatenate the digits pressed
    double label_number;

    // uses a qstring to store the number so that it can be outputted on the label
    QString new_label;

    // to clear screen after operator
    if((ui->add_button->isChecked()||ui->subtract_button->isChecked()
         ||ui->multiply_button->isChecked()||ui->divide_button->isChecked()) && (!userIsTypingSecondNumber))
    {
        // doesnt append
        label_number = button->text().toDouble();
        userIsTypingSecondNumber = true;
        // store the double number in qstring. 'g' indicates char format(chk form doc). 15 indicates precision
        new_label = QString::number(label_number,'g',15);
    }
    else
    {
        //concatenates the numbers and stores in variable
        label_number = (ui->label->text() + button->text()).toDouble();
        new_label = QString::number(label_number,'g',15);
    }

    // visualization of qstring on label
    ui->label->setText(new_label);
}


void basic_calculator::on_clear_button_released()
{
    // reset all
    ui->add_button->setChecked(false);
    ui->subtract_button->setChecked(false);
    ui->multiply_button->setChecked(false);
    ui->divide_button->setChecked(false);

    userIsTypingSecondNumber= false;

    ui->label->setText("0");
}


void basic_calculator::on_equals_button_released()
{
    double label_number, second_number;
    // uses a qstring to store the result number
    QString result_number;

    // sets the number on the label as second label
    second_number = ui->label->text().toDouble();

    // conditions check for each binary operator
    if(ui->add_button->isChecked())
    {
        label_number = first_number + second_number;
        result_number = QString::number(label_number, 'g', 15);
        ui->label->setText(result_number);
        ui->add_button->setChecked(false);
    }
    else if(ui->subtract_button->isChecked())
    {
        label_number = first_number - second_number;
        result_number = QString::number(label_number, 'g', 15);
        ui->label->setText(result_number);
        ui->subtract_button->setChecked(false);
    }
    else if(ui->multiply_button->isChecked())
    {
        label_number = first_number * second_number;
        result_number = QString::number(label_number, 'g', 15);
        ui->label->setText(result_number);
        ui->multiply_button->setChecked(false);
    }
    else if(ui->divide_button->isChecked())
    {
        label_number = first_number / second_number;
        result_number = QString::number(label_number, 'g', 15);
        ui->label->setText(result_number);
        ui->divide_button->setChecked(false);
    }

    // when operator selected, number ends
    userIsTypingSecondNumber= false;
}

void basic_calculator::binary_operation_pressed()
{
    // checks button pressed
    QPushButton *button = (QPushButton *)sender();

    first_number = ui->label->text().toDouble();

    // to check operator pressed
    button->setChecked(true);

    // view the operation that is being performed
    // ui->label->setText(button->text());
}
