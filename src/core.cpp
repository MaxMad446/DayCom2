// Auto-generated module | 2026-05-14T06:23:22.862555
#include <iostream>
#include <vector>

int compute_683() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
