#include "AllSolutionHeaders.hpp"

int main() {
    std::cout << "--- Motor Controller Analysis via CAN Bus Data ---\n\n";
    std::cout << "Maximum allowed speed: " << MAX_ALLOWED_SPEED_RPM << " RPM\n\n";
    
    std::vector<int> speed_spikes = log_speed_spikes(can_messages_bytes);
    
    std::cout << "Detected speed spikes at timestamps: ";
    for(int timestamp : speed_spikes) {
        std::cout << timestamp << " ";
    }

    return 0;
}
