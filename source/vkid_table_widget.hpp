#ifndef VKID_TABLE_WIDGET_HXX
#define VKID_TABLE_WIDGET_HXX

#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QPair>

#include <QtGui/QClipboard>

#include <QtWidgets/QApplication>

#include <QtWidgets/QTableWidgetItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QHeaderView>

#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLabel>

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

class VkidTableWidget : public QVBoxLayout {
Q_OBJECT
protected:
    static const QList<QPair<QString, QString>> vkidTableData;

    QLineEdit*       lineEditSearchFilter;
    QTableWidget*    tableWidgetVkidTable;
    QLabel*          labelMsdnLink;

protected slots:
    void applySearchFilter();
    void copyItemVkid(QTableWidgetItem* item);

public:
    VkidTableWidget(QWidget* parent);
};

#endif // VKID_TABLE_DIALOG_HXX
