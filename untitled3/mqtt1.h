#ifndef MQTT1_H
#define MQTT1_Hi
#include <QMqttClient>
//#include <QMqttSubscription>
#include <QObject>
class mqtt1 : public QObject
{
    Q_OBJECT
    QMqttClient mqttClient;
    //QMqttSubscription mqttSub;
public:

    mqtt1();
    void connectHost();
    void kichHoat(QString message);
    //void nhan(QString message1);
public slots:
    void onStateChanged(QMqttClient::ClientState state);
    //void onStateChanged(QMqttSubscription::SubscriptionState state);//new
    void onConnected();
    void onGoidien(QString message);
signals:
    void goidien(QString message="nhac may len");
    //void messageReceived(QMqttMessage message1="in ra man hinh");//new
    //void subscribed();
};

#endif // MQTT1_H
