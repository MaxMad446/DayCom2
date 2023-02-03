// Auto-generated module | 2026-05-11T21:37:22.523574
#include <iostream>
#include <vector>

int compute_831() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
