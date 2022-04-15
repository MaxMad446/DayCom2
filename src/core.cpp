// Auto-generated module | 2026-05-11T20:58:37.591523
#include <iostream>
#include <vector>

int compute_406() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_406() << std::endl;
    return 0;
}
