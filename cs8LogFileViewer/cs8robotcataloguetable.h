#ifndef CS8ROBOTCATALOGUETABLE_H
#define CS8ROBOTCATALOGUETABLE_H

#include <QSqlTableModel>

class QFile;

class cs8RobotCatalogueTable : public QSqlTableModel
{
public:
    cs8RobotCatalogueTable(QObject *parent = 0);
    bool importCSVFile(QFile *file, bool clearBeforeImport=false);
};

#endif // CS8ROBOTCATALOGUETABLE_H
