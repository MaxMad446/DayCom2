// Auto-generated module | 2026-05-13T20:49:10.728324
#include <iostream>
#include <vector>

int compute_868() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
