#ifndef NUMPADTEXTEDIT_H
#define NUMPADTEXTEDIT_H

#include <QTextEdit>
#include <QObject>

class NumPadTextEdit : public QTextEdit
{
    Q_OBJECT
public:
    NumPadTextEdit(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent *e) override;
};

#endif // NUMPADTEXTEDIT_H
