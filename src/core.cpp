// Auto-generated module | 2026-05-11T20:25:45.888706
#include <iostream>
#include <vector>

int compute_264() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
