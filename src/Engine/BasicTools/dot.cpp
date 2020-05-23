#include "dot.h"

dot::dot(){
	x=0;
	y=0;
}

dot::dot(int a, int b){
	x=a;
	y=a;
}

void dot::move(int a, int b){
	x+=a;
	y+=b;
}

void dot::moveX(int a){
	x+=a;
}
void dot::moveY(int b){
	y+=b;
}
void dot::set(int a, int b){
	
}
void dot::setX(int a){}
void dot::setY(int b){}
void dot::reset(){}
