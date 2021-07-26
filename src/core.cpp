// Auto-generated module | 2026-05-12T20:51:58.289983
#include <iostream>
#include <vector>

int compute_365() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
