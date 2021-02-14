// Auto-generated module | 2026-05-12T20:38:45.618922
#include <iostream>
#include <vector>

int compute_872() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
