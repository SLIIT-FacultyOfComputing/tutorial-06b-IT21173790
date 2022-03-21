#include "Box.h"

// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {

   return (width*height*length);
  
}

void Box::setLength(int L){

  length=L;
  
}
void Box::setHeight(int H){
height=H;
  
}

void Box::setWidth(int W){

  width=W;
}
int Box::getLength(){

 return length;
  
}
int Box::getWidth(){

  return width;
  
}

int Box::getHeight(){

  return height;
}


 