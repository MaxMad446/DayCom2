// Auto-generated module | 2026-05-13T20:34:49.927652
#include <iostream>
#include <vector>

int compute_264() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
