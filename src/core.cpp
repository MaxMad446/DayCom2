// Auto-generated module | 2026-05-12T03:59:44.974663
#include <iostream>
#include <vector>

int compute_352() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
