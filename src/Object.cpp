#include "../include/Object.hpp"

/* ** Constructors ** */ 

Tibia::Object::Object( sf::RenderWindow & w, sf::Texture & tx, sf::Vector2f ps ) :
  win(w), mainTexture(tx), sprite(tx), pos(ps) 
{
  sprite.setPosition(ps);
}

Tibia::Object::Object( sf::RenderWindow & w, sf::Sprite & sp,  sf::Vector2f ps ) :
  win(w), mainTexture(*sp.getTexture()), sprite(sp), pos(ps) 
{
  sprite.setPosition(ps);
}

/* ** END Constructors ** */ 


/* ** Methods ** */ 

void Tibia::Object::setPos( int xpos, int ypos )
{
  // Set Posytion integral number
  pos = sf::Vector2f(xpos, ypos);
  sprite.setPosition(pos);
}

void Tibia::Object::setMainTexture( sf::Texture & tx )
{
  // Set main texture
  sprite.setTexture(tx);
}

void Tibia::Object::draw() const
{
  // Drawing 
  win.draw(sprite);
}

/* ** END Methods ** */ 