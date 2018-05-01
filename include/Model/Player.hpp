<<<<<<< HEAD
<<<<<<< HEAD
#pragma once

#include <string>
#include <utility>

#include <Model/Entity.hpp>

namespace RG {
  namespace Model {
    /**
     * \class Player
     * \brief Object manipulated by user
     */
    class Player : public Entity {
      public:
        Player(float x, float y, std::shared_ptr<b2World> world, std::string name);

        ~Player();

        void Move( void ); // FIXME (vanda)

      private:
    };
  }
}
=======
//
// Created by pjahoda on 29.4.18.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include <memory>

namespace RG{
    class Player{
    public:
        Player();
        std::pair<float,float> GetPosition() const;
        void Move(float x,float y);
    protected:
    private:
        float x;
        float y;
    };

}


#endif //GAME_PLAYER_H
>>>>>>> develop
||||||| merged common ancestors
=======
//
// Created by pjahoda on 29.4.18.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include <memory>

namespace RG{
    class Player{
    public:
        Player();
        std::pair<float,float> GetPosition() const;
        void Move(float x,float y);
    protected:
    private:
        float x;
        float y;
    };

}


#endif //GAME_PLAYER_H
>>>>>>> develop
