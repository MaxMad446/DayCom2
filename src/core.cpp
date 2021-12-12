// Auto-generated module | 2026-05-12T21:04:01.948984
#include <iostream>
#include <vector>

int compute_205() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
