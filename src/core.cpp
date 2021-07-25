// Auto-generated module | 2026-05-12T20:51:54.630675
#include <iostream>
#include <vector>

int compute_642() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
