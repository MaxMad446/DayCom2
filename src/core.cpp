// Auto-generated module | 2026-05-14T18:04:54.704983
#include <iostream>
#include <vector>

int compute_280() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
