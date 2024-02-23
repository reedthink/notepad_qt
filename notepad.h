#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr); //没加explicit会不会有问题？
    ~Notepad();

private slots:
    void newDocument();
    void open();
    void save();
    void saveAs();
    void print();
    void exit();
    void copy();
    void cut();
    void paste();
    void undo();
    void redo();
//    void selectFont();
//    void setFontBold(bool bold);
//    void setFontUnderline(bool underline);
//    void setFontItalic(bool italic);
//    void about();


//    void on_actionOpen_triggered();

//    void on_actionSave_triggered();

//    void on_actionNew_triggered();

//    void on_actionSave_as_triggered();

//    void on_actionPrint_triggered();

//    void on_actionExit_triggered();

private:
    Ui::Notepad *ui;
    QString currentFile;
};
#endif // NOTEPAD_H
