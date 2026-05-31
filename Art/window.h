#ifndef WINDOW_H
#define WINDOW_H
#include<QWidget>
#include<QPushButton>
#include<QVBoxLayout>
#include "area.h"

class Window : public QWidget
{
protected:
    Area * area;
    QPushButton * btn;
public:
    Window();
};
#endif
