// Auto-generated module | 2026-05-11T22:00:28.575459
#include <iostream>
#include <vector>

int compute_776() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
