// Auto-generated module | 2026-05-11T20:11:31.409019
#include <iostream>
#include <vector>

int compute_356() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
