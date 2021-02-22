// Auto-generated module | 2026-05-11T20:04:27.726859
#include <iostream>
#include <vector>

int compute_520() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
