#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void nappi1Handler();
    void nappi2Handler();
    void nappi3Handler();
    void nappi4Handler();
    void nappi5Handler();
    void nappi6Handler();
    void nappi7Handler();
    void nappi8Handler();
    void nappi9Handler();
    void nappi0Handler();
    void nappiAddHandler();
    void nappiSubHandler();
    void nappiMulHandler();
    void nappiDivHandler();
    void nappiClearHandler();
    void nappiEnterHandler();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state=0;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
