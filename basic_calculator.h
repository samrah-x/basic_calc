#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class basic_calculator;
}
QT_END_NAMESPACE

class basic_calculator : public QDialog
{
    Q_OBJECT

public:
    basic_calculator(QWidget *parent = nullptr);
    ~basic_calculator();

private:
    Ui::basic_calculator *ui;

private slots:
    void digit_pressed();

    void on_clear_button_released();
    void on_equals_button_released();
    void binary_operation_pressed();
};
#endif // BASIC_CALCULATOR_H
