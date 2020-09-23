#include "mqtt2.h"

mqtt2::mqtt2()
{
    void mqtt2::onStateChanged(QMqttSubscription::SubscriptionState state)
    {
        qDebug()<<state;//trang thai ket noi(0,1,2,3,4)
    }
}
