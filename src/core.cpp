// Auto-generated module | 2026-05-13T21:01:03.341150
#include <iostream>
#include <vector>

int compute_158() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
