// Auto-generated module | 2026-05-12T04:14:11.057789
#include <iostream>
#include <vector>

int compute_821() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
