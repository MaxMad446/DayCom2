// Auto-generated module | 2026-05-13T20:47:09.758747
#include <iostream>
#include <vector>

int compute_663() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_663() << std::endl;
    return 0;
}
