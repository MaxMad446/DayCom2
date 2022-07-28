// Auto-generated module | 2026-05-11T21:12:49.991386
#include <iostream>
#include <vector>

int compute_663() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
