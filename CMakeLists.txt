cmake_minimum_required(VERSION 3.27)
project(20_RPG_208)

set(CMAKE_CXX_STANDARD 17)

include_directories(Character)
include_directories(Combat)
include_directories(Enemy)
include_directories(Player)

add_executable(20_RPG_208 main.cpp
        Character/Character.cpp
        Character/Character.h
        Combat/Combat.cpp
        Combat/Combat.h
        Combat/Action.h
        Enemy/Enemy.cpp
        Enemy/Enemy.h
        Player/Player.cpp
        Player/Player.h
        Utils.h)
