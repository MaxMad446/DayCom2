// Auto-generated module | 2026-05-13T22:12:48.085645
#include <iostream>
#include <vector>

int compute_958() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
