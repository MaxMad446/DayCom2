// Auto-generated module | 2026-05-13T22:05:28.521624
#include <iostream>
#include <vector>

int compute_736() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
