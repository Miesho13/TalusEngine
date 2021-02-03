#ifndef PLAYER_H_
#define PLAYER_H_

#include "SFML/Graphics.hpp"
#include "../include/Object.hpp"

namespace Talus
{
  /* All typde def used in Player class */

  typedef unsigned int resource;  // Player's resource for example (HP, MANA, CAP...)
  typedef unsigned int leavelVal; // Player's valriable for (leavel, expirience..) 

  /* *********************************** */
  
  class Player : public Object
  {
    private:
      leavelVal leavel;

      leavelVal currenExpirience;

      leavelVal nextLeavelExprience;

      resource maxHealthPoint;
      
      resource currentHealthPoint;

      resource maxMana;

      resource currentMana;

      resource capasity;

    public:


  };
} // namespace Talus


#endif