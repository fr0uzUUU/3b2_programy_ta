#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPushButton"
#include "QPointer"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool ox;
    int tab[3][3];
    void kliknij(QPointer<QPushButton> p, int t[3][3], int x, int y);
    int sprawdz(int t[3][3]);
    void zwyciezca(int z);
    void blokuj();
    void reset();

private slots:
    void on_p_1_clicked();
    void on_p_2_clicked();
    void on_p_3_clicked();
    void on_p_4_clicked();
    void on_p_5_clicked();
    void on_p_6_clicked();
    void on_p_7_clicked();
    void on_p_8_clicked();
    void on_p_9_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
