#ifndef TESTDOME_HPP
#define TESTDOME_HPP

// Problem Statement

// You're a software engineer working on a robot's motor control system. The motor's state, including state, 
// including its position and status, is transmitted as a stream of raw bytes over a CAN bus. Your task is to write the C++ 
// code to correctly parse and analyze this data.

// Each CAN message is an 8-byte payload. You know the data is structured as follows:

// The first 4 bytes represent to 32-bit absolute encoder reading
// The next 2 bytes represent a 16-bit status word
// The last 2 bytes are reserved

// You have a log of 10 consecutive CAN messages, provided below as raw byte arrays. The system is little-endian. The encoder has a 
// resolution of 4096 counts per revolution, and the messages are transmitted at a fixed interval of 10 milliseconds.

// Your goal is:

// Identify and log timestamps where the motor's speed exceeds a maximum of 600 RPM or a fault status is detected.

#include <iostream>
#include <cstdint>
#include <vector>
#include <iomanip>
#include <cmath>
#include <array>
#include <numeric>

// --- DO NOT MODIFY THIS SECTION ---
const double TIME_INTERVAL_MS = 10.0;
const uint32_t ENCODER_RESOLUTION = 4096;
const double MAX_ALLOWED_SPEED_RPM = 600.0;
const uint16_t MOTOR_STATUS_FAULT = 0x0100;
const int NUM_READINGS = 10;

const std::array<std::array<uint8_t, 8>, NUM_READINGS> can_messages_bytes = {{
    {{0, 0, 0, 0, 0, 0, 0, 0}}, 
    {{100, 0, 0, 0, 0, 0, 0, 1}}, 
    {{200, 0, 0, 0, 0, 0, 0, 0}}, 
    {{240, 15, 0, 0, 0, 0, 1, 0}}, 
    {{50, 1, 0, 0, 0, 0, 0, 0}}, 
    {{0, 1, 0, 0, 0, 3, 0, 1}}, 
    {{192, 19, 0, 0, 0, 0, 3, 0}}, 
    {{44, 20, 0, 0, 0, 0, 0, 0}}, 
    {{32, 6, 0, 0, 0, 1, 1, 0}}, 
    {{132, 3, 0, 0, 0, 0, 0, 0}} 
    
}};

// --- END DO NOT MODIFY SECTION ---

auto log_speed_spikes(const std::array<std::array<uint8_t, 8>, NUM_READINGS>& data) {
    std::vector<int> spike_timestamps;
    
    
    return spike_timestamps;
}

#endif // TESTDOME_HPP