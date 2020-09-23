#ifndef MQTT2_H
#define MQTT2_H
#include <QMqttSubscription>
#include <QObject>

class mqtt2: public QObject
{
public:
    Q_OBJECT
    QMqttSubscription mqttSubscription;
    mqtt2();
public slots:
    void onStateChanged(QMqttSubscription::SubscriptionState state);


};

#endif // MQTT2_H
