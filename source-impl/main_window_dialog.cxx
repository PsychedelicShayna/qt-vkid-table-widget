#include "main_window_dialog.hxx"
#include "ui_main_window_dialog.h"

MainWindow::MainWindow(QWidget* parent)
    :
      QMainWindow            { parent                       },
      ui                     { new Ui::MainWindow           },
      vkidTableWidget        { new VkidTableWidget { this } }
{
    ui->setupUi(this);

    setWindowFlags(
                Qt::Dialog
                | Qt::CustomizeWindowHint
                | Qt::WindowTitleHint
                | Qt::WindowCloseButtonHint
                );

    ui->verticalLayout->addLayout(vkidTableWidget);

}

MainWindow::~MainWindow() {
    delete ui;
}

