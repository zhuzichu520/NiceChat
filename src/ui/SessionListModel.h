﻿#ifndef SESSIONLISTMODEL_H
#define SESSIONLISTMODEL_H

#include <QObject>
#include <QAbstractListModel>
#include <QJsonDocument>
#include "database/Session.h"

class SessionListModel: public QAbstractListModel
{
    Q_OBJECT
public:

    enum Roles {
        Id,
        Body,
        Scene,
        Type,
        Ex,
        Time,
        Status,
        UnRead,
    };

    explicit SessionListModel(QObject *parent = nullptr);
    ~SessionListModel();

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role =Qt::DisplayRole) const override;

    QHash<int, QByteArray> roleNames() const override;

    void addData(const QList<Session> &list);

    void setNewData(const QList<Session> &list);

    void addOrUpdateData(const Session &session);

    Q_INVOKABLE int count();

    Q_INVOKABLE QJsonObject getItem(int index);

    Q_INVOKABLE int getIndexByAccid(const QString& accid);

private:
    QList<Session> m_Sessions;
};


#endif // SESSIONLISTMODEL_H