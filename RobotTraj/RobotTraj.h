
#ifndef RobotTraj_h
#define RobotTraj_h

#include "Arduino.h"

class RobotTraj {
public:
    

    // Commands
/*    void SetPosition(int motor_number, float position);
    void SetPosition(int motor_number, float position, float velocity_feedforward);
    void SetPosition(int motor_number, float position, float velocity_feedforward, float current_feedforward);
    void SetVelocity(int motor_number, float velocity);
    void SetVelocity(int motor_number, float velocity, float current_feedforward);
    void SetCurrent(int motor_number, float current);
    void TrapezoidalMove(int motor_number, float position);*/
    // Getters
    int GetLengthTraj1();
    float GetTraj1(int motor, int step);
    // General params
    //float readFloat();
    //int32_t readInt();

    // State helper
    //bool run_state(int axis, int requested_state, bool wait);

};

#endif //ODriveArduino_h
