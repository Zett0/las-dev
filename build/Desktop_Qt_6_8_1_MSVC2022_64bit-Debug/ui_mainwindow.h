/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QOpenGLWidget *openGLWidget;
    QWidget *controlPanel;
    QHBoxLayout *horizontalLayout;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QSlider *frameSlider;
    QLabel *frameLabel;
    QComboBox *cameraComboBox;
    QSpinBox *pointSizeSpinBox;
    QSpinBox *fpsSpinBox;
    QCheckBox *axesCheckBox;
    QComboBox *colorModeComboBox;
    QSpinBox *cameraXSpinBox;
    QSpinBox *cameraYSpinBox;
    QSpinBox *cameraZSpinBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setObjectName("verticalLayout");
        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName("openGLWidget");

        verticalLayout->addWidget(openGLWidget);

        controlPanel = new QWidget(centralWidget);
        controlPanel->setObjectName("controlPanel");
        horizontalLayout = new QHBoxLayout(controlPanel);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        loadButton = new QPushButton(controlPanel);
        loadButton->setObjectName("loadButton");

        horizontalLayout->addWidget(loadButton);

        saveButton = new QPushButton(controlPanel);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);

        frameSlider = new QSlider(controlPanel);
        frameSlider->setObjectName("frameSlider");
        frameSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(frameSlider);

        frameLabel = new QLabel(controlPanel);
        frameLabel->setObjectName("frameLabel");

        horizontalLayout->addWidget(frameLabel);

        cameraComboBox = new QComboBox(controlPanel);
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->addItem(QString());
        cameraComboBox->setObjectName("cameraComboBox");

        horizontalLayout->addWidget(cameraComboBox);

        pointSizeSpinBox = new QSpinBox(controlPanel);
        pointSizeSpinBox->setObjectName("pointSizeSpinBox");
        pointSizeSpinBox->setMinimum(1);
        pointSizeSpinBox->setMaximum(10);
        pointSizeSpinBox->setValue(1);

        horizontalLayout->addWidget(pointSizeSpinBox);

        fpsSpinBox = new QSpinBox(controlPanel);
        fpsSpinBox->setObjectName("fpsSpinBox");
        fpsSpinBox->setMinimum(1);
        fpsSpinBox->setMaximum(60);
        fpsSpinBox->setValue(30);

        horizontalLayout->addWidget(fpsSpinBox);

        axesCheckBox = new QCheckBox(controlPanel);
        axesCheckBox->setObjectName("axesCheckBox");

        horizontalLayout->addWidget(axesCheckBox);

        colorModeComboBox = new QComboBox(controlPanel);
        colorModeComboBox->addItem(QString());
        colorModeComboBox->addItem(QString());
        colorModeComboBox->addItem(QString());
        colorModeComboBox->setObjectName("colorModeComboBox");

        horizontalLayout->addWidget(colorModeComboBox);

        cameraXSpinBox = new QSpinBox(controlPanel);
        cameraXSpinBox->setObjectName("cameraXSpinBox");
        cameraXSpinBox->setMinimum(-360);
        cameraXSpinBox->setMaximum(360);
        cameraXSpinBox->setValue(0);

        horizontalLayout->addWidget(cameraXSpinBox);

        cameraYSpinBox = new QSpinBox(controlPanel);
        cameraYSpinBox->setObjectName("cameraYSpinBox");
        cameraYSpinBox->setMinimum(-360);
        cameraYSpinBox->setMaximum(360);
        cameraYSpinBox->setValue(0);

        horizontalLayout->addWidget(cameraYSpinBox);

        cameraZSpinBox = new QSpinBox(controlPanel);
        cameraZSpinBox->setObjectName("cameraZSpinBox");
        cameraZSpinBox->setMinimum(-360);
        cameraZSpinBox->setMaximum(360);
        cameraZSpinBox->setValue(0);

        horizontalLayout->addWidget(cameraZSpinBox);


        verticalLayout->addWidget(controlPanel);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Point Cloud Viewer", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Load File", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save Video", nullptr));
        frameLabel->setText(QCoreApplication::translate("MainWindow", "Frame: 0", nullptr));
        cameraComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Top", nullptr));
        cameraComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Bottom", nullptr));
        cameraComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Left", nullptr));
        cameraComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Right", nullptr));
        cameraComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Front", nullptr));
        cameraComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Back", nullptr));
        cameraComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Custom", nullptr));

        cameraComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Top", nullptr));
        axesCheckBox->setText(QCoreApplication::translate("MainWindow", "Show Axes", nullptr));
        colorModeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Intensity", nullptr));
        colorModeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Color", nullptr));
        colorModeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Height", nullptr));

        colorModeComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Intensity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
