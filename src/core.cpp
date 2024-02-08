// Auto-generated module | 2026-05-14T18:20:17.000215
#include <iostream>
#include <vector>

int compute_683() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
