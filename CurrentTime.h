#ifndef CURRUNTTIME_H
#define CURRUNTTIME_H
#include <QTime>
#include <QTimer>
#include <QLineEdit>

class CurrentTime : public QObject
{
    Q_OBJECT
public:
    CurrentTime(){}
    virtual ~CurrentTime() {}
    void Timer(QLineEdit* line, int step);



public slots:
    void Update();

private:

    QLineEdit* new_line;
    QTimer* timer;

};






#endif // CURRUNTTIME_H

