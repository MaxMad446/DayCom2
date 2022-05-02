// Auto-generated module | 2026-05-13T22:10:49.804522
#include <iostream>
#include <vector>

int compute_940() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_940() << std::endl;
    return 0;
}
