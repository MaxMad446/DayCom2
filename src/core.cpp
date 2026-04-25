// Auto-generated module | 2026-05-12T06:20:45.486324
#include <iostream>
#include <vector>

int compute_719() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
