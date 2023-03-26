#pragma once
#include <stdint.h>

#define PS3_STICK_CENTER 0x80
#define PS3_ACCEL_CENTER 0x0200
#define GUITAR_ONE_G 40

typedef struct {
    uint8_t report_id; /* 0x5 */
    uint8_t valid_flag0;
    uint8_t valid_flag1;

    uint8_t reserved1;

    uint8_t motor_right;
    uint8_t motor_left;

    uint8_t lightbar_red;
    uint8_t lightbar_green;
    uint8_t lightbar_blue;
    uint8_t lightbar_blink_on;
    uint8_t lightbar_blink_off;
    uint8_t reserved[21];
} __attribute__((packed)) ps4_output_report;

typedef struct {
    uint8_t report_id;
    uint8_t leftStickX;
    uint8_t leftStickY;
    uint8_t rightStickX;
    uint8_t rightStickY;
    uint8_t dpad : 4;
}  __attribute__((packed)) PS4Dpad_Data_t;

typedef struct {
    uint8_t report_id;
    uint8_t leftStickX;
    uint8_t leftStickY;
    uint8_t rightStickX;
    uint8_t rightStickY;
    uint32_t dpadUp : 1;
    uint32_t dpadDown : 1;
    uint32_t dpadLeft : 1;
    uint32_t dpadRight : 1;
    // 14 bits for buttons.
    uint32_t x : 1;  // square
    uint32_t a : 1;  // cross
    uint32_t b : 1;  // circle
    uint32_t y : 1;  // triangle

    uint32_t leftShoulder : 1;   // l1
    uint32_t rightShoulder : 1;  // r1
    uint32_t l2 : 1;             // l2
    uint32_t r2 : 1;             // r2

    uint32_t back : 1;             // share
    uint32_t start : 1;            // options
    uint32_t leftThumbClick : 1;   // l3
    uint32_t rightThumbClick : 1;  // r3

    uint32_t guide : 1;    // ps
    uint32_t capture : 1;  // touchpad click
    // 6 bit report counter.
    uint32_t reportCounter : 6;

    uint32_t leftTrigger : 8;
    uint32_t rightTrigger : 8;

    uint32_t padding : 24;
    uint8_t mystery[22];
    uint8_t touchpadData[8];
    uint8_t mystery_2[21];
} __attribute__((packed)) PS4Gamepad_Data_t;

typedef struct
{
    uint8_t reportId;

    uint8_t unused1;
    uint8_t strumBar;
    uint8_t whammy;
    uint8_t tilt;

    //      0
    //   7     1
    // 6    15   2
    //   5     3
    //      4
    union {
        struct {
            bool dpadUp : 1;
            bool dpadDown : 1;
            bool dpadLeft : 1;
            bool dpadRight : 1;
        };
        uint8_t dpad : 4;
    };
    bool white1 : 1;  // square, white1
    bool black1 : 1;  // cross, black1
    bool black2 : 1;  // circle, black2
    bool black3 : 1;  // triangle, black3

    bool white2 : 1;  // white2, l1
    bool white3 : 1;  // white3, r1
    bool : 1;         // l2
    bool : 1;         // r2

    bool : 1;                 // share
    bool start : 1;           // pause, options
    bool leftThumbClick : 1;  // l3, ghtv
    bool back : 1;            // r3, hero power, map it to back here as then this is like the ps3 and xb1 report

    bool guide : 1;    // ps
    bool capture : 1;  // touchpad click

    uint8_t unused2[57];
} __attribute__((packed)) PS4GHLGuitar_Data_t;