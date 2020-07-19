#pragma once
// We need to look at commands sent by consoles so we can make sure that they dont conflict.
enum SerialCommands {
    COMMAND_REBOOT=0x30,
    COMMAND_GET_SIGNATURE,
    COMMAND_GET_CPU_FREQ,
    COMMAND_GET_BOARD,
    COMMAND_JUMP_BOOTLOADER,
    COMMAND_FIND_DIGITAL,
    COMMAND_FIND_ANALOG,
    COMMAND_FIND_CANCEL,
    COMMAND_GET_EXTENSION,
    COMMAND_AVRDUDE,
    COMMAND_READ_CONFIG,
    COMMAND_WRITE_CONFIG,
    COMMAND_WRITE_SUBTYPE,
};