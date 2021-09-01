// Auto-generated module | 2026-05-12T20:55:16.764381
#include <iostream>
#include <vector>

int compute_923() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
