// Auto-generated module | 2026-05-11T21:12:55.655322
#include <iostream>
#include <vector>

int compute_443() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
