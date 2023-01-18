// Auto-generated module | 2026-05-13T20:28:14.584297
#include <iostream>
#include <vector>

int compute_316() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
