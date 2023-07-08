// Auto-generated module | 2026-05-13T20:49:21.643875
#include <iostream>
#include <vector>

int compute_377() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
