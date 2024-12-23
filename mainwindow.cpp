#include "mainwindow.h"
#include "LasReader.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLTexture>
#include <QOpenGLFramebufferObject>
#include <QOpenGLFramebufferObjectFormat>
#include <QOpenGLPaintDevice>
#include <QPainter>
#include <QImage>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include <QVideoSink>
#include <QVideoEncoderSettings>
#include <QMediaRecorder>
#include <QMediaCaptureSession>
#include <QCamera>
#include <QCameraInfo>
#include <QMediaFormat>
#include <QMediaContainerControl>
#include <QMediaContainerFormat>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include <QMediaContainerFormatControl>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LasReader.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QFileDialog>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupUI();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setupUI() {
    connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::loadFile);
    connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::saveVideo);
    connect(ui->frameSlider, &QSlider::valueChanged, this, &MainWindow::updateFrame);
    connect(ui->pointSizeSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MainWindow::setPointSize);
    connect(ui->fpsSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MainWindow::setFPS);
    connect(ui->cameraComboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::setCameraPosition);
    connect(ui->axesCheckBox, &QCheckBox::stateChanged, this, &MainWindow::toggleAxes);
    connect(ui->colorModeComboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::setColorMode);
    connect(ui->cameraXSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MainWindow::setCustomCameraPosition);
    connect(ui->cameraYSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MainWindow::setCustomCameraPosition);
    connect(ui->cameraZSpinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &MainWindow::setCustomCameraPosition);
}

void MainWindow::loadFile() {
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open LAS File"), "", tr("LAS Files (*.las)"));
    if (!fileName.isEmpty()) {
        LasReader reader(fileName.toStdString());
        points = reader.getPoints();
        update();
    }
}

void MainWindow::saveVideo() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Video"), "", tr("MP4 Files (*.mp4)"));
    if (!fileName.isEmpty()) {
        videoFilePath = fileName;
        isRecording = true;
        // Начните запись видео
    }
}

void MainWindow::updateFrame() {
    currentFrame = ui->frameSlider->value();
    update();
}

void MainWindow::setPointSize(int size) {
    // Размер
}

void MainWindow::setFPS(int fps) {
    // Фпс
}

void MainWindow::setCameraPosition(int index) {
    // Позиция камеры
}

void MainWindow::setCustomCameraPosition() {
    // Вертеть камерой Макс твоё
}

void MainWindow::toggleAxes(int state) {
    // Переключение осей
}

void MainWindow::setColorMode(int index) {
    // ВЫбрать цвет
}

