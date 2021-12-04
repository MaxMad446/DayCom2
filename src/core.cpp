// Auto-generated module | 2026-05-12T21:03:27.684303
#include <iostream>
#include <vector>

int compute_857() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_857() << std::endl;
    return 0;
}
