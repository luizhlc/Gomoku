/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.cpp
 * Author: luiz
 * 
 * Created on August 31, 2016, 1:51 PM
 */

#include "../include/Gomoku.h"
#define NW 0
#define N  1
#define NE 2
#define W  3
#define E  4
#define SW 5
#define S  6
#define SE 7

Gomoku::Gomoku(Player p1, Player p2, int size = 15) : _p1(p1), _p2(p2), _size(size) {
    _places.reserve(size+2);
    generate_places();   
    generate_neighbors();
    _active = &_p1;
}

//Gomoku::Gomoku(const Gomoku& orig) {
//}

Gomoku::~Gomoku() {
}

void Gomoku::generate_places() {
    for (int i = 1; i < _size+1; ++i) {
        _places[i].reserve(_size+2);
        _places[i][0] = Place(-1); // Wall O 
        
        for (int j = 1; j < _size+1; ++j) {
            _places[i][j] = Place(); //playable places
        }
        _places[i][_size+1] = Place(-1); // Wall L
    }

    for (int i = 1; i < _size+1; ++i) {
        _places[0][i] = Place(-1); // Wall N
        _places[_size+1][i] = Place(-1); // Wall S
    }

    _places[0][0] = Place(-1); // Wall NO
    _places[0][_size+1] = Place(-1); // Wall NL
    _places[_size+1][0] = Place(-1); // Wall SO
    _places[_size+1][_size+1] = Place(-1); // Wall SL
}

void Gomoku::generate_neighbors() {
    for (int i = 1; i < _size+1; ++i) {
        for (int j = 1; j < _size+1; ++j) {
            std::vector<Place*> neighs({&_places[i-1][j-1], &_places[i-1][j], &_places[i-1][j+1], 
                                       &_places[i][j-1],                    &_places[i][j+1],
                                       &_places[i+1][j-1], &_places[i+1][j], &_places[i+1][j+1]
                                      }
                                     );
            _places[i][j].generate_neighborhood(neighs);
        }
    }
}

bool Gomoku::place_piece(int x, int y){
    bool success = _places[x][y].put_piece(_active->color());
    if (success) {
        last_played = std::make_pair(x,y);
        check_game_won();
        change_active_player();
    }
    return success;
} 

int Gomoku::check_game_won() {
    // This should be refactored
    int game_won = 0;
    int playing = _active->color();

    return game_won;
}

std::vector<std::pair<int, int> > Gomoku::check_four_in_row(){
    return {};
}

void Gomoku::change_active_player(){
    if (&_p1 == _active)
        _active = &_p2; 
    else
        _active = &_p1;
}
