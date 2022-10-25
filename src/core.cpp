// Auto-generated module | 2026-05-14T06:23:05.540314
#include <iostream>
#include <vector>

int compute_683() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
