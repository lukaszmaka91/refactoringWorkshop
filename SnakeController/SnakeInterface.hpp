#pragma once

#include <cstdint>

const std::uint32_t DIRECTION_IND_MSG = 0x10;
const std::uint32_t TIMEOUT_IND_MSG = 0x20;
const std::uint32_t DISPLAY_IND_MSG = 0x30;
const std::uint32_t FOOD_IND_MSG = 0x40;
const std::uint32_t FOOD_REQ_MSG = 0x41;
const std::uint32_t FOOD_RESP_MSG = 0x42;
const std::uint32_t SCORE_IND_MSG = 0x70;
const std::uint32_t LOOSE_IND_MSG = 0x71;
const std::uint32_t PAUSE_IND_MSG = 0x91;


namespace Snake
{

enum Direction
{
    Direction_UP    = 0b00,
    Direction_DOWN  = 0b10,
    Direction_LEFT  = 0b01,
    Direction_RIGHT = 0b11
};

struct DirectionInd
{
    static constexpr std::uint32_t MESSAGE_ID = DIRECTION_IND_MSG;

    Direction direction;
};


struct TimeoutInd
{
    static constexpr std::uint32_t MESSAGE_ID = TIMEOUT_IND_MSG;
};

enum Cell
{
    Cell_FREE,
    Cell_FOOD,
    Cell_SNAKE
};

struct DisplayInd
{
    static constexpr std::uint32_t MESSAGE_ID = DISPLAY_IND_MSG;

    int x;
    int y;
    Cell value;
};

struct FoodInd
{
    static constexpr std::uint32_t MESSAGE_ID = FOOD_IND_MSG;

    int x;
    int y;
};

struct FoodReq
{
    static constexpr std::uint32_t MESSAGE_ID = FOOD_REQ_MSG;
};

struct FoodResp
{
    static constexpr std::uint32_t MESSAGE_ID = FOOD_RESP_MSG;

    int x;
    int y;
};

struct ScoreInd
{
    static constexpr std::uint32_t MESSAGE_ID = SCORE_IND_MSG;
};

struct LooseInd
{
    static constexpr std::uint32_t MESSAGE_ID = LOOSE_IND_MSG;
};

struct PauseInd
{
    static constexpr std::uint32_t MESSAGE_ID = PAUSE_IND_MSG;
};

} // namespace Snake
