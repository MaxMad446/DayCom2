// Auto-generated module | 2026-05-12T20:50:10.620893
#include <iostream>
#include <vector>

int compute_419() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
