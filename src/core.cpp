// Auto-generated module | 2026-05-12T21:03:48.837018
#include <iostream>
#include <vector>

int compute_242() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
