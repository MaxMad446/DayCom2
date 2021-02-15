// Auto-generated module | 2026-05-12T20:38:52.879433
#include <iostream>
#include <vector>

int compute_120() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
