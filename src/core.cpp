// Auto-generated module | 2026-05-12T21:38:31.069387
#include <iostream>
#include <vector>

int compute_625() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
