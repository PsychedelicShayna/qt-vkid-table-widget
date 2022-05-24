#ifndef MAIN_WINDOW_DIALOG_HXX
#define MAIN_WINDOW_DIALOG_HXX

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

#include <vkid_table_widget.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
Q_OBJECT

protected:
    Ui::MainWindow* ui;

    VkidTableWidget*    vkidTableWidget;

public:
    MainWindow(QWidget* parent = nullptr);
    virtual ~MainWindow() override;
};

#endif // MAIN_WINDOW_DIALOG_HXX
