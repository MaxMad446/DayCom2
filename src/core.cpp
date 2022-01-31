// Auto-generated module | 2026-05-11T20:49:07.281512
#include <iostream>
#include <vector>

int compute_816() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
