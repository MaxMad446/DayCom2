// Auto-generated module | 2026-05-12T21:37:56.570888
#include <iostream>
#include <vector>

int compute_878() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
