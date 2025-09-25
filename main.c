#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    // Declaration of constants
    const double g = 9.81; // gravitational acceleration
    const int mass = 80; // the mass of parachutist in Kg
    const double speed_of_sound = 343.0; // speed of sound in m/s
    const double minimum_acceleration = 0.5; // minimum acceleration for max speed message

    // Declaration of initial variables
    double v0 = 0.0; // initial speed
    int t0 = 0.0; // initial time
    double h0 = 39000.0; // initial altitude

    // Declaration of parachutist parameters
    double surface_area; // surface area of the parachutist in m^2
    double speed; // speed of the parachutist in m/s
    double height; // altitude of the parachutist in m
    double accel; // acceleration of the parachutist in m/s^2
    int t; // time during simulation in s
    bool speed_of_sound_is_exceeded = false; // variable to check if speed of sound is exceeded
    bool maximum_speed_is_reached = false; // variable to check if maximum speed is reached
    bool parachute_opened = false; // variable to check if parachute is opened

    // Initialize parachutist parameters
    surface_area = 2.0;
    speed = v0;
    height = h0;
    accel = g;
    t = t0;

    // Display initial values of simulation
    printf("t, height,     speed,  accel\n");
    printf("%d, %.4f, %.4f, %.5f\n", t, height, speed, accel);

    // Calculation of the evolution of the athlete in free fall
    while (height > 0) {
        // Time increment
        t += 1;
        double s = surface_area / mass; // Surface area divided by mass
        double q = exp(-s * (t - t0));

        // Expressions of the evolution of the athlete in free fall
        speed = (g / s) * (1 - q) + v0 * q; // speed expression
        height = h0 - (g / s) * (t - t0) - (v0 - g / s) / s * (1 - q); // height expression
        accel = g - s * speed; // acceleration expression

        // Check if speed of sound is exceeded
        if (speed > speed_of_sound && !speed_of_sound_is_exceeded) {
        // Display speed of sound is exceeded message
            printf("## Hatem exceeds the speed of sound\n");
            speed_of_sound_is_exceeded = true; // Set the variable to avoid repeated messages
        }

        // Check if maximum speed is reached
        if (accel < minimum_acceleration && !maximum_speed_is_reached) {

        // Display maximum speed is reached message
            printf("## Hatem has reached his maximum speed\n");
            maximum_speed_is_reached = true; // Set the variable to avoid repeated messages
        }

        // Check if altitude is lower than 2500m and parachute is not opened
        if (height < 2500 && !parachute_opened) {

        // Modification parachutist parameters
            surface_area = 25.0;
            t0 = t;
            v0 = speed;
            h0 = height;

        // Display parachute opening message
            printf("## Hatem opens his parachute\n");
            parachute_opened = true;// Set the variable to avoid repeated
        }

        // Display values of the athlete
        if (height > 0) {
            printf("%d, %.4f, %.4f, %.5f\n", t, height, speed, accel);
        }
    }
    return 0;
}
//Prepared by:Amini Safa_Semaoui Maroua/Groupe:06
