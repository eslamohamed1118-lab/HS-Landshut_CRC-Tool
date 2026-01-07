#include "crc_main.h"   // Includes the header file of the main class crc_main
                        //This class controls your main window (GUI) and the entire logic of the tool.

#include <QApplication>   //(required for every Qt GUI programme).


int main(int argc, char *argv[])  //The main function of every C++ application–this is where the programme starts.
                                  //argc and argv contain the start parameters.
{
    QApplication a(argc, argv);   //No GUI can run without this object
    crc_main w;         //Creates an object of your main class (your central window with tabs such as CAN, LIN, FlexRay, etc.).
    w.show();            //Displays the window
    return a.exec();    //Starts the Qt event loop – the programme remains active, responds to clicks, inputs, etc.
                        //Only when the window is closed does it return here and terminate itself.
}
