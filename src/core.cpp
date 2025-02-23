// Auto-generated module | 2026-05-12T04:00:01.930408
#include <iostream>
#include <vector>

int compute_683() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
