#include "Window.hpp"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    Window w;
    w.show();

    return QApplication::exec();
}
