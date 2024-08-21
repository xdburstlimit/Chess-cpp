#ifndef _KING_
#define _KING_

#include "Piece.h"
#include <iostream>
#include <iomanip>

class King : public Piece{
    public:
        char symbol_param;
        King(int x_param, int y_param,char colour_param);
        ~King() = default; //checkout later idk
        virtual void display() override{
            std::cout << std::setw(2) << symbol_param;
        }
        virtual bool isValidMove(int oldX, int oldY, int newX, int newY, const Board& board, char colour_param) override;
    
};

#endif