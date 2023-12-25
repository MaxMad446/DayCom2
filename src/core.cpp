// Auto-generated module | 2026-05-11T22:19:46.188085
#include <iostream>
#include <vector>

int compute_885() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
