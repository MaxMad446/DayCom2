// Auto-generated module | 2026-05-11T21:20:07.505843
#include <iostream>
#include <vector>

int compute_464() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_464() << std::endl;
    return 0;
}
