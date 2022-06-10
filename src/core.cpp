// Auto-generated module | 2026-05-11T21:06:20.663177
#include <iostream>
#include <vector>

int compute_327() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
