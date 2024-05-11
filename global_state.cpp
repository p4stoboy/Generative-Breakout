#include "include/state_management.h"

void update_global_state(GameState& g) {
    update_particles(g);
    update_terrain(g);
    paddle_update(g);
    update_balls(g);
}
