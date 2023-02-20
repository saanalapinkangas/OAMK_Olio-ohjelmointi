#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->nappi1, SIGNAL(clicked()),
            this, SLOT(nappi1Handler()));
    connect(ui->nappi2, SIGNAL(clicked()),
            this, SLOT(nappi2Handler()));
    connect(ui->nappi3, SIGNAL(clicked()),
            this, SLOT(nappi3Handler()));
    connect(ui->nappi4, SIGNAL(clicked()),
            this, SLOT(nappi4Handler()));
    connect(ui->nappi5, SIGNAL(clicked()),
            this, SLOT(nappi5Handler()));
    connect(ui->nappi6, SIGNAL(clicked()),
            this, SLOT(nappi6Handler()));
    connect(ui->nappi7, SIGNAL(clicked()),
            this, SLOT(nappi7Handler()));
    connect(ui->nappi8, SIGNAL(clicked()),
            this, SLOT(nappi8Handler()));
    connect(ui->nappi9, SIGNAL(clicked()),
            this, SLOT(nappi9Handler()));
    connect(ui->nappi0, SIGNAL(clicked()),
            this, SLOT(nappi0Handler()));
    connect(ui->nappiAdd, SIGNAL(clicked()),
            this, SLOT(nappiAddHandler()));
    connect(ui->nappiSub, SIGNAL(clicked()),
            this, SLOT(nappiSubHandler()));
    connect(ui->nappiMul, SIGNAL(clicked()),
            this, SLOT(nappiMulHandler()));
    connect(ui->nappiDiv, SIGNAL(clicked()),
            this, SLOT(nappiDivHandler()));
    connect(ui->nappiClear, SIGNAL(clicked()),
            this, SLOT(nappiClearHandler()));
    connect(ui->nappiEnter, SIGNAL(clicked()),
            this, SLOT(nappiEnterHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::nappi1Handler()
{     numberClickedHandler();}

void MainWindow::nappi2Handler()
{   numberClickedHandler();}

void MainWindow::nappi3Handler()
{     numberClickedHandler();}

void MainWindow::nappi4Handler()
{     numberClickedHandler();}

void MainWindow::nappi5Handler()
{     numberClickedHandler();}

void MainWindow::nappi6Handler()
{     numberClickedHandler();}

void MainWindow::nappi7Handler()
{     numberClickedHandler();}

void MainWindow::nappi8Handler()
{     numberClickedHandler();}

void MainWindow::nappi9Handler()
{     numberClickedHandler();}

void MainWindow::nappi0Handler()
{     numberClickedHandler();}

void MainWindow::nappiAddHandler()
{   operand=2;
    addSubMulDivClickHandler();
    qDebug() << "valittu yhteenlasku";
}

void MainWindow::nappiSubHandler()
{   operand=3;
    addSubMulDivClickHandler();
    qDebug() << "valittu vähennyslasku";
}

void MainWindow::nappiMulHandler()
{   operand=4;
    addSubMulDivClickHandler();
    qDebug() << "valittu kertolasku";
}

void MainWindow::nappiDivHandler()
{   operand=5;
    addSubMulDivClickHandler();
    qDebug() << "valittu jakolasku";
}

void MainWindow::nappiClearHandler()
{   operand=0;
    clearAndEnterClickHandler();
}

void MainWindow::nappiEnterHandler()
{
    clearAndEnterClickHandler();
}



void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    //number1=number1+name.last(1);
    //number2=number2+name.last(1);
    //qDebug() << "number 1 (painallusmäärät) =" << number1 << " and number 2 (näppäin) = " << number2 << Qt::endl;

    if (state==0) {     //ensimmäinen tekstikenttä
        number1=number1+name.last(1);
        ui->num1->setText(number1);
    }

    else if (state==1) {       // toinen tekstikenttä
        number2=number2+name.last(1);
        ui->num2->setText(number2);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    float n1=number1.toFloat();
    float n2=number2.toFloat();


    if (operand==2) {       // enter, yhteenlasku
        result=n1+n2;
        ui->result->setText(QString::number(result));
        qDebug() << "yhteenlaskun tulos = " << result;
        // laskee väärin, laskee debugin antamat arvot yhteen
    }

    else if (operand==3) {  // enter, vähennyslasku
        result=n1-n2;
        ui->result->setText(QString::number(result));
        qDebug() << "vähennyslaskun tulos = " << result;
    }

    else if (operand==4) {  // enter, kertolasku
        result=n1*n2;
        ui->result->setText(QString::number(result));
        qDebug() << "kertolaskun tulos = " << result;
    }

    else if (operand==5) {  // enter, jakolasku
        result=n1/n2;
        ui->result->setText(QString::number(result));
        qDebug() << "jakolaskun tulos = " << result;
    }

    else if (operand==0) {  // clear, pyyhitään tekstikentät
        ui->num1->setText("");
        ui->num2->setText("");
        ui->result->setText("");
        number1="";
        number2="";
        state=0;        //palataan ensimmäiseen tekstikenttään
        qDebug() << "kentät pyyhitty, palattu alkuun";
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    state=1;    //aletaan syöttää 2-kenttään numeroita
    qDebug() << "laskutapa valittu, siirrytään toiseen tekstikenttään";

}

void MainWindow::resetLineEdits()
{
    // tälle ei tullut käyttöä...
}

