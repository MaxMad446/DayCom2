// Auto-generated module | 2026-05-12T20:50:06.398167
#include <iostream>
#include <vector>

int compute_127() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
