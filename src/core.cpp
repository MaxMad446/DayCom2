// Auto-generated module | 2026-05-11T20:15:32.595278
#include <iostream>
#include <vector>

int compute_198() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
