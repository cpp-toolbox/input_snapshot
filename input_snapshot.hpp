#ifndef INPUT_SNAPSHOT_HPP
#define INPUT_SNAPSHOT_HPP

#include <glm/glm.hpp>
#include "../camera/camera.hpp"

class InputSnapshot {
  public:
    bool left_pressed = false;
    bool right_pressed = false;
    bool forward_pressed = false;
    bool backward_pressed = false;
    bool jump_pressed = false;
    double mouse_position_x = 0.0, mouse_position_y = 0.0;
    glm::vec3 input_snapshot_to_input_direction(Camera camera);
};

#endif // INPUT_SNAPSHOT_HPP
