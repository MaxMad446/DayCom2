// Auto-generated module | 2026-05-13T20:27:23.519669
#include <iostream>
#include <vector>

int compute_534() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
