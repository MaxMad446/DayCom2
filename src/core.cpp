// Auto-generated module | 2026-05-11T22:28:16.755920
#include <iostream>
#include <vector>

int compute_561() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
