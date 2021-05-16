#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QList>

#include<QColor>
#include<QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Button_1_clicked();

    void on_Button_2_clicked();

    void on_Button_3_clicked();

    void on_Button_4_clicked();

    void on_Button_5_clicked();

    void on_Button_6_clicked();

    void on_Button_7_clicked();

    void on_Button_8_clicked();

    void on_pushButton_9_clicked();

    void on_SaveColor_2_clicked();

    void on_LoadColor_2_clicked();

private:
    Ui::Widget *ui;
    QList<QColor>ColorList;

     //to save color pushbutton

         void SaveColor_2(QString key,QColor color);

     //To loiad color

         QColor loadColor_2(QString key);

     //to set loaded color

          void setLoadedColor(QString key,int index,QPushButton *button);
};
#endif // WIDGET_H
