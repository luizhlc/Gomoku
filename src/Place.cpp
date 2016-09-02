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


Place::Place(int owner) {
    _owner = owner;
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

