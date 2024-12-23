#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QVector3D>
#include <vector>
#include <QTimer>
#include <QFileDialog>
#include <QSlider>
#include <QLabel>
#include <QComboBox>
#include <QCheckBox>
#include <QSpinBox>

class MainWindow : public QMainWindow, protected QOpenGLFunctions {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private slots:
    void loadFile();
    void saveVideo();
    void updateFrame();
    void setPointSize(int size);
    void setFPS(int fps);
    void setCameraPosition(int index);
    void setCustomCameraPosition();
    void toggleAxes(int state);
    void setColorMode(int index);

private:
    void setupUI();
    void renderFrame();
    void saveFrameToVideo();

    QOpenGLShaderProgram program;
    std::vector<Point> points;
    QTimer timer;
    QFileDialog fileDialog;
    QSlider frameSlider;
    QLabel frameLabel;
    QComboBox cameraComboBox;
    QSpinBox pointSizeSpinBox;
    QSpinBox fpsSpinBox;
    QCheckBox axesCheckBox;
    QComboBox colorModeComboBox;
    QSpinBox cameraXSpinBox;
    QSpinBox cameraYSpinBox;
    QSpinBox cameraZSpinBox;
    int currentFrame;
    int totalFrames;
    bool isRecording;
    QString videoFilePath;
    QVector3D cameraPosition;
    QVector3D cameraRotation;
};

#endif // MAINWINDOW_H
