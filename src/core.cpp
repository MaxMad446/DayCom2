// Auto-generated module | 2026-05-13T20:52:36.426791
#include <iostream>
#include <vector>

int compute_191() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
