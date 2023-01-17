#ifndef GEOMETRY_H
#define GEOMETRY_H


bool pointInRect(float x, float y, float rx, float ry, float rw, float rh){
    if ((x > rx) && (x < rw + rx)&& (y < ry) && (y > ry - rh)){
        //x has to be greater than rx
        //x has to be less than rw + rx because thats the right point of the triangle
        //y has to be less than ry because the rectangle moves downwards
        //y has to be greater than ry - rh
        return true;
    }
    else 
        return false;
    
    
    
    
    
    return false;
}


#endif
