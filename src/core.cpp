// Auto-generated module | 2026-05-12T20:59:19.005824
#include <iostream>
#include <vector>

int compute_667() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
