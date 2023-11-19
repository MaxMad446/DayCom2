// Auto-generated module | 2026-05-13T21:00:27.653896
#include <iostream>
#include <vector>

int compute_683() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
