#ifndef ENTITY
#define ENTITY

#include <raylib.h>
#include <raymath.h>
class Entity{
public: 

    Vector2 _position; 
    float _radius;
    float _size;
    float _speed;
    float _speedMultiplier;
    float _buffTimer;
    int _healthPoints;

    Vector2 velocity;
    bool isColliding;
    Vector2 targetTile;

    float _damage;
    bool _damaged;
    bool _buffed;
    
private:
   
};



#endif