// Auto-generated module | 2026-05-12T20:45:01.376584
#include <iostream>
#include <vector>

int compute_428() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
