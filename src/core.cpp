// Auto-generated module | 2026-05-14T06:18:06.928812
#include <iostream>
#include <vector>

int compute_538() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
