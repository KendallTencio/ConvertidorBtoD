#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "convertidor.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Salida_textChanged(const QString &arg1);

    void on_DtoB_clicked(bool checked);

    void on_BtoD_clicked(bool checked);

private:
    Convertidor conv;
    Ui::MainWindow *ui;
    bool DecABi = false;
    bool BiADec = false;
};

#endif // MAINWINDOW_H
