// Auto-generated module | 2026-05-12T20:55:15.349964
#include <iostream>
#include <vector>

int compute_774() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
