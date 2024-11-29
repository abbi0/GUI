#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[]){
    QApplication app(argc, argv); // Initialize application

    QWidget window; // Create main window
    window.setWindowTitle("Simple Program"); // Set window title 

    window.resize(300, 200); // Set window size

    // Create button widget
    QPushButton *button = new QPushButton("Click me!",
    &window);

    button->setGeometry(100, 80, 100, 30); // Set the button position and size

    // Connect button clicked signal to a slot that shows a message box
    QObject::connect(button, &QPushButton::clicked,[&](){
        QMessageBox::information(&window, "Message",
        "Button clicked!");
    });

    // Show main window 
    window.show();

    return app.exec();
}
