// generated by Fast Light User Interface Designer (fluid) version 1.0302

#include "test1.h"

SimpleUI::SimpleUI() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(550, 385);
    w = o;
    o->user_data((void*)(this));
    { new Fl_Box(25, 25, 330, 136, "Hello World");
    } // Fl_Box* o
    o->end();
  } // Fl_Double_Window* o
  w->show();
}

 

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

int main(int argc, char **argv) 
{
 
  SimpleUI();
  return Fl::run();
}

