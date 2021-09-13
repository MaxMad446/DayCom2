// Auto-generated module | 2026-05-11T20:30:40.065898
#include <iostream>
#include <vector>

int compute_392() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
