// Auto-generated module | 2026-05-12T20:47:43.012351
#include <iostream>
#include <vector>

int compute_933() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
