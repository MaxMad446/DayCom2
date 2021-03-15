// Auto-generated module | 2026-05-12T21:36:37.798303
#include <iostream>
#include <vector>

int compute_480() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
