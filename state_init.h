#pragma once

#include "types.h"

/**
 * @brief Create a new game state.
 *
 * @return GameState The new game state.
 */
GameState new_game_state();

/**
 * @brief Reset the game state.
 *
 * @param game The game state to reset.
 */
void reset_game_state(GameState& game);

/**
 * @brief Create a new paddle.
 *
 * @return Paddle The new paddle.
 */
Paddle new_paddle();

/**
 * @brief Create a new particle.
 *
 * @param pos The position of the particle.
 * @param vel The velocity of the particle.
 * @param clr The color of the particle.
 * @param size The size of the particle.
 * @param ttl The time to live of the particle.
 * @return Particle The new particle.
 */
Particle new_particle(point_2d pos, vector_2d vel, color clr, int size, int ttl);

/**
 * @brief Create a new ball.
 *
 * @param pos The position of the ball.
 * @param vel The velocity of the ball.
 * @param size The size of the ball.
 * @param clr The color of the ball.
 * @param effect The effect of the ball.
 * @param ttl_type The time to live type of the ball.
 * @param ttl The time to live of the ball.
 * @return Ball The new ball.
 */
Ball new_ball(point_2d pos, vector_2d vel, int size, color clr, BallEffect effect, int ttl_type, int ttl);

/**
 * @brief Create a new block.
 *
 * @param pos The position of the block.
 * @param target_pos The target position of the block.
 * @param grid_pos The grid position of the block.
 * @param width The width of the block.
 * @param height The height of the block.
 * @param c The color of the block.
 * @return Block The new block.
 */
Block new_block(point_2d pos, point_2d target_pos, ivec2 grid_pos, int width, int height, color c);
