/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IA.h
 * Author: luiz
 *
 * Created on August 31, 2016, 2:19 PM
 */
#include "Player.h"

#ifndef IA_H
#define IA_H

class IA : Player {
public:
    IA();
    IA(const IA& orig);
    ~IA();
private:
    double minimax(); // Minimax algorithm implementation
    double score(); // Heuristic + Utility Functions
};

#endif /* IA_H */

