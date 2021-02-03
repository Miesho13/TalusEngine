/*
  Declaration Object class
*/


#ifndef OBJECT_HPP_
#define OBJECT_HPP_


#include "SFML\Graphics.hpp"

namespace Talus 
{
  class Object
  {
    private:
      sf::Texture mainTexture; // Main Texture

      sf::Sprite sprite; // Sprite object

      sf::Vector2f pos; // Posytion 

      sf::RenderWindow & win;

      
    public:
    // Constructors:
      Object( 
        sf::RenderWindow & w,
        sf::Texture & tx, 
        sf::Vector2f ps = sf::Vector2f(0.0f, 0.0f)
      );

      Object( 
        sf::RenderWindow & w,
        sf::Sprite & tx, 
        sf::Vector2f ps = sf::Vector2f(0.0f, 0.0f) 
      );

    // Methods:
      sf::Texture getTexture( ) const { return this->mainTexture; }

      sf::Sprite getSprite( ) const { return this->sprite; }

      sf::Vector2f getPosytion( ) const { return this->pos; }

      void setPos( int xpos, int ypos );

      void setMainTexture( sf::Texture & tx );

      virtual void draw( ) const;

  };
} // namespace Talus

#endif