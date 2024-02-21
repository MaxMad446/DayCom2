// Auto-generated module | 2026-05-11T22:27:32.697384
#include <iostream>
#include <vector>

int compute_533() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
