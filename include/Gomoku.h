/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Board.h
 * Author: luiz
 *
 * Created on August 31, 2016, 1:51 PM
 */

#include <utility>
#include "Place.h"
#include "Player.h"

#ifndef BOARD_H
#define BOARD_H



class Gomoku {

public:
    Gomoku(Player, Player, int);
    Gomoku(const Gomoku& orig);
    ~Gomoku();
    bool place_piece(int, int); // Coord. X, Coord. Y, Player
    int check_game_won();
    std::vector<std::pair<int, int> > check_four_in_row();
    void change_active_player();
private:
    std::vector<std::vector<Place> > _places;//
    Player _p1, _p2;
    Player * _active;
    int _size;
    std::pair<int, int> last_played; // Atualizado toda vez que uma jogada é feita.

    void generate_places();
    void generate_neighbors();

};

#endif /* BOARD_H */

