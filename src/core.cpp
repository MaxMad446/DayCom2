// Auto-generated module | 2026-05-13T20:31:18.756812
#include <iostream>
#include <vector>

int compute_440() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
