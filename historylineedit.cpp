#include "historylineedit.h"


historyLineEdit::historyLineEdit(QWidget *parent) : QLineEdit(parent)
{

}

//
//  Andere implementatie voor de clear functie waarbij de waardes opgeslagen worden
//
void historyLineEdit::clearAndSave(void)
{
    // We slagen de vorige waarde op en clearen de box
    m_history.prepend(this->text());
    this->clear();

    //We zetten ook de huidige index op 0
    m_currentIndex = 0;

    // We gaan max 10 items bijhouden
    if(m_history.count() > 10)
    {
        m_history.removeAt(m_history.count() - 1);
    }

}

//
//  Functie als de up-key ingedrukt is
//
void historyLineEdit::upKeyPressed(void)
{
    if(m_currentIndex != -1)
    {
        this->setText(m_history.at(m_currentIndex));
    }

    if(m_currentIndex != m_history.count()-1)
    {
        m_currentIndex ++;
    }
}

//
//  Functie als de down-key ingedrukt is
//
void historyLineEdit::downKeyPressed(void)
{
    if(m_currentIndex != -1)
    {
        this->setText(m_history.at(m_currentIndex));
        m_currentIndex --;
    }
    else
    {
        this->clear();
        //m_currentIndex = 0;
    }
}


void historyLineEdit::keyPressEvent(QKeyEvent *ev)
{
    switch(ev->key())
    {
        case Qt::Key_Up:
            upKeyPressed();
            break;

        case Qt::Key_Down:
            downKeyPressed();
            break;

        default:
            QLineEdit::keyPressEvent(ev);
    }
}
