// Auto-generated module | 2026-05-11T20:31:10.562201
#include <iostream>
#include <vector>

int compute_464() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
