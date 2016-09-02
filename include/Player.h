/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: luiz
 *
 * Created on August 31, 2016, 2:02 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player();
    Player(const Player& orig);
    ~Player();
    int color() { return _color; }
protected:
    int _color;
    

};

#endif /* PLAYER_H */

