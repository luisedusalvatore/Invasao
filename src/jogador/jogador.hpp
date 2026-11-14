
#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <raylib.h>
#include "constantes.hpp"

class Jogador{
    private: 
        int x;
        int y;
        int vx = 5;
        int altura;
        int largura;

        void ajusta_x(int vel){
            
            if((x + vel + largura) > WIDTH || (x + vel) < 0){
                return;
            }
            x+=vel;
            return;
            
        }

    public:
        void move_x(int sentido){
            ajusta_x(sentido >= 0? vx:-vx);
        }

};
#endif