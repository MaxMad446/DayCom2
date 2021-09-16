// Auto-generated module | 2026-05-11T20:31:03.390667
#include <iostream>
#include <vector>

int compute_243() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
