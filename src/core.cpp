// Auto-generated module | 2026-05-12T21:00:45.510655
#include <iostream>
#include <vector>

int compute_933() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_933() << std::endl;
    return 0;
}
