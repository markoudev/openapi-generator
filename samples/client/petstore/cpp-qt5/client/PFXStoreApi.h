/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef PFX_PFXStoreApi_H
#define PFX_PFXStoreApi_H

#include "PFXHttpRequest.h"

#include "PFXOrder.h"
#include <QMap>
#include <QString>

#include <QObject>

namespace test_namespace {

class PFXStoreApi: public QObject {
    Q_OBJECT

public:
    PFXStoreApi(const QString &scheme = "http", const QString &host = "petstore.swagger.io", int port = 0, const QString& basePath = "/v2", const int timeOut = 0);
    ~PFXStoreApi();

    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setBasePath(const QString& basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString& path);
    void addHeaders(const QString& key, const QString& value);

    void deleteOrder(const QString& order_id);
    void getInventory();
    void getOrderById(const qint64& order_id);
    void placeOrder(const PFXOrder& body);
    
private:
    QString _scheme, _host, _basePath;
    int _port, _timeOut;
    QString _workingDirectory;
    QMap<QString, QString> defaultHeaders;
    void deleteOrderCallback (PFXHttpRequestWorker * worker);
    void getInventoryCallback (PFXHttpRequestWorker * worker);
    void getOrderByIdCallback (PFXHttpRequestWorker * worker);
    void placeOrderCallback (PFXHttpRequestWorker * worker);
    
signals:
    void deleteOrderSignal();
    void getInventorySignal(QMap<QString, qint32> summary);
    void getOrderByIdSignal(PFXOrder summary);
    void placeOrderSignal(PFXOrder summary);
    
    void deleteOrderSignalFull(PFXHttpRequestWorker* worker);
    void getInventorySignalFull(PFXHttpRequestWorker* worker, QMap<QString, qint32> summary);
    void getOrderByIdSignalFull(PFXHttpRequestWorker* worker, PFXOrder summary);
    void placeOrderSignalFull(PFXHttpRequestWorker* worker, PFXOrder summary);
    
    void deleteOrderSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalE(QMap<QString, qint32> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalE(PFXOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalE(PFXOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    
    void deleteOrderSignalEFull(PFXHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalEFull(PFXHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalEFull(PFXHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalEFull(PFXHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    
};

}
#endif
