/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Human.h
 * Author: luiz
 *
 * Created on August 31, 2016, 2:19 PM
 */
#include "Player.h"
#ifndef HUMAN_H
#define HUMAN_H

class Human : public Player{
public:
    Human();
    Human(const Human& orig);
    ~Human();
private:

};

#endif /* HUMAN_H */

