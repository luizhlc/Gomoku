/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Casa.cpp
 * Author: luiz
 * 
 * Created on August 31, 2016, 1:43 PM
 */

#include "../include/Place.h"


Place::Place(int owner) : _owner(owner) {
}

Place::Place(const Place& orig) {
}

Place::~Place() {
}

void Place::generate_neighborhood(std::vector<Place*> neighborhood){
	_neighborhood = neighborhood;
}

bool Place::put_piece(int piece) {
	if (_owner > 0)
		return false;
	_owner = piece;
	return true;
}

int Place::find_piar(int direction, int lvl) {
    int in_a_row = 1;
    in_a_row += _neighborhood[direction]->find_piar(direction, lvl-1, _owner);
    return in_a_row;
} // pieces in a row

int Place::find_piar(int direction, int lvl, int color) {
    if (color != _owner || lvl < 1) {
        return 0;
    } else {
        return 1+_neighborhood[direction]->find_piar(direction, lvl-1, _owner);
    }
}