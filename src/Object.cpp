#include "../include/Object.hpp"

/* ** Constructors ** */ 

Talus::Object::Object( sf::RenderWindow & w, sf::Texture & tx, sf::Vector2f ps ) :
  win(w), mainTexture(tx), sprite(tx), pos(ps) 
{
  sprite.setPosition(ps);
}

Talus::Object::Object( sf::RenderWindow & w, sf::Sprite & sp,  sf::Vector2f ps ) :
  win(w), mainTexture(*sp.getTexture()), sprite(sp), pos(ps) 
{
  sprite.setPosition(ps);
}

/* ** END Constructors ** */ 


/* ** Methods ** */ 

void Talus::Object::setPos( int xpos, int ypos )
{
  // Set Posytion integral number
  pos = sf::Vector2f(xpos, ypos);
  sprite.setPosition(pos);
}

void Talus::Object::setMainTexture( sf::Texture & tx )
{
  // Set main texture
  sprite.setTexture(tx);
}

void Talus::Object::draw() const
{
  // Drawing 
  win.draw(sprite);
}

/* ** END Methods ** */ 