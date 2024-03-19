// Auto-generated module | 2026-05-11T22:30:58.809346
#include <iostream>
#include <vector>

int compute_683() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
