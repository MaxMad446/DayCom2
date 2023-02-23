// Auto-generated module | 2026-05-13T20:31:23.711873
#include <iostream>
#include <vector>

int compute_732() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
