// Auto-generated module | 2026-05-12T21:01:12.191633
#include <iostream>
#include <vector>

int compute_129() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
