// Auto-generated module | 2026-05-14T18:27:39.635977
#include <iostream>
#include <vector>

int compute_572() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_572() << std::endl;
    return 0;
}
