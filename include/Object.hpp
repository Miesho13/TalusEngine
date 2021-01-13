/*
  Declaration Object class
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

//
namespace tibia 
{

  #include "SFML\Graphics.hpp"

  typedef bool Movable;

  class Object
  {
    private:
      sf::Sprite sprite; // Sprite object

      sf::Texture mainTexture; // Main Texture

      sf::Vector2f pos; // Posytion 

      

    public:
    // Constructors:
      Object( sf::Texture & tx,  sf::Vector2f ps = sf::Vector2f(0.f, 0.f) );

      Object( sf::Sprite & tx,  sf::Vector2f ps = sf::Vector2f(0.f, 0.f) );

    // Methods:
      sf::Texture getTexture( ) const { return this->mainTexture; }

      sf::Sprite getSprite( ) const { return this->sprite; }

      sf::Vector2f getPosytion( ) const { return this->pos; }

      void setPos( int xpos, int ypos );

      void setMainTexture( sf::Texture & tx );

  };
}


#endif