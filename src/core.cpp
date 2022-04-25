// Auto-generated module | 2026-05-11T21:00:04.577318
#include <iostream>
#include <vector>

int compute_411() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
