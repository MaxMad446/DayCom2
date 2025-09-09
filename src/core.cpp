// Auto-generated module | 2026-05-12T04:26:06.342103
#include <iostream>
#include <vector>

int compute_896() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
