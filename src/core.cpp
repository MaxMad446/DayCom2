// Auto-generated module | 2026-05-12T06:22:30.634222
#include <iostream>
#include <vector>

int compute_897() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_897() << std::endl;
    return 0;
}
