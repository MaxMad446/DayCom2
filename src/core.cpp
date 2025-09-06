// Auto-generated module | 2026-05-12T21:29:30.588543
#include <iostream>
#include <vector>

int compute_912() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
