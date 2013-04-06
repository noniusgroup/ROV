#ifndef ENGINESMAP_H
#define ENGINESMAP_H

#include <QWidget>
#include <QVector>

class EnginesMap : public QWidget
{
    Q_OBJECT

    class Engine
    {
        double *rect;

        bool reverse;
        double speed;
        int number;

    public:

        void Draw(QPainter *paint, int fieldWidth, int fieldHeight);

        void SetRect(double _rect[4]);

        void SetSpeed(double _speed);

        void SetReverse(bool _reverse);

        void SetNumber(int _number);

        int GetNumber();
    };

public:
    explicit EnginesMap(QWidget *parent = 0);

    EnginesMap(QImage backgroundImage, QWidget *parent = 0);

    void LoadConfig(QString path);

    void SetSpeed(int engineNumber, int speed);

    void SetReverse(int engineNumber, bool reverse);

private:
    QVector<Engine*> engines;
    QImage _backgroundImage;
    bool imageSpecified;

    void paintEvent(QPaintEvent *);
    
signals:
    
public slots:

};

#endif // ENGINESMAP_H
