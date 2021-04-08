#include "numpadtextedit.h"

#include <QKeyEvent>

NumPadTextEdit::NumPadTextEdit(QWidget *parent) : QTextEdit(parent)
{

}

void
NumPadTextEdit::keyPressEvent(QKeyEvent *e)
{
    if ((e->key() == Qt::Key_3) && (e->modifiers() & Qt::KeypadModifier)) {
        insertPlainText("k");
    } else {
        QTextEdit::keyPressEvent(e);
    }
}
