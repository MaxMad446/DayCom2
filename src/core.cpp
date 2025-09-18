// Auto-generated module | 2026-05-12T04:27:16.274281
#include <iostream>
#include <vector>

int compute_354() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
