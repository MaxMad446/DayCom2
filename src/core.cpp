// Auto-generated module | 2026-05-12T19:58:23.942587
#include <iostream>
#include <vector>

int compute_264() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_264() << std::endl;
    return 0;
}
