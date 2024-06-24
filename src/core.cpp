// Auto-generated module | 2026-05-11T22:43:35.814892
#include <iostream>
#include <vector>

int compute_683() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
