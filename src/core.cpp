// Auto-generated module | 2026-05-11T21:34:18.210560
#include <iostream>
#include <vector>

int compute_586() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
