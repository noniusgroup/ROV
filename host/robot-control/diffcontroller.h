#ifndef DIFFCONTROLLER_H
#define DIFFCONTROLLER_H

#include <QObject>
#include <QTcpSocket>
#include <QString>

class DiffController : public QObject
{
    Q_OBJECT
public:
    explicit DiffController(QTcpSocket *socket, QObject *parent = 0);

    double GetPitch();

    double GetForwardSpeed();

    double GetBackwardSpeed();

    void SetTargetPitch(double tgPitch);

    void QueryPitch();

private:
    QTcpSocket *_socket;
    double pitch, targetPitch;
    double fwSpeed, bwSpeed;

    void CalcSpeeds();
    
signals:
    
public slots:
    
};

#endif // DIFFCONTROLLER_H
