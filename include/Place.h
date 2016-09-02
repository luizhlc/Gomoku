/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Casa.h
 * Author: luiz
 *
 * Created on August 31, 2016, 1:43 PM
 */
#include <vector>

#ifndef CASA_H
#define CASA_H

class Place {
 public:
    Place(int);
    Place(const Place& orig);
    ~Place();
    void generate_neighborhood(std::vector<Place*>);
    bool put_piece(int); 

 private:
    short int _owner; // -1 = Wall; 0 = free; 1= Player 1; 2= Player 2;
    int _flags;
    int _x, _y; // coordinate;
    int _area;
    std::vector<Place*> _neighborhood; // L -> R; U -> D



    
};

#endif /* CASA_H */

