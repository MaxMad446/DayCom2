// Auto-generated module | 2026-05-12T21:08:57.115762
#include <iostream>
#include <vector>

int compute_402() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
