#ifndef HISTORYLINEEDIT_H
#define HISTORYLINEEDIT_H

#include <QtWidgets>


class historyLineEdit : public QLineEdit
{
    public:
        historyLineEdit(QWidget *parent);

        void keyPressEvent(QKeyEvent *ev);

        void clearAndSave(void);

    private:
        void downKeyPressed(void);
        void upKeyPressed(void);

        QStringList m_history;
        int m_currentIndex = 0;
};

#endif // HISTORYLINEEDIT_H
