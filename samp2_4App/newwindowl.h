#ifndef NEWWINDOWL_H
#define NEWWINDOWL_H

#include <QWidget>

namespace Ui {
class newWindowl;
}

class newWindowl : public QWidget
{
    Q_OBJECT

public:
    explicit newWindowl(QWidget *parent = nullptr);
    ~newWindowl();

private:
    Ui::newWindowl *ui;
};

#endif // NEWWINDOWL_H
