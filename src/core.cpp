// Auto-generated module | 2026-05-12T04:31:53.336652
#include <iostream>
#include <vector>

int compute_215() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
