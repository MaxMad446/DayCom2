// Auto-generated module | 2026-05-11T20:34:47.684978
#include <iostream>
#include <vector>

int compute_182() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
