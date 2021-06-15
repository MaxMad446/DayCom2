// Auto-generated module | 2026-05-12T20:48:40.914832
#include <iostream>
#include <vector>

int compute_130() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
