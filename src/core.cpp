// Auto-generated module | 2026-05-12T20:52:23.522114
#include <iostream>
#include <vector>

int compute_639() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
