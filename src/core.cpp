// Auto-generated module | 2026-05-12T20:44:52.797437
#include <iostream>
#include <vector>

int compute_683() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
