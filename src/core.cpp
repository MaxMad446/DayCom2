// Auto-generated module | 2026-05-13T20:39:13.754439
#include <iostream>
#include <vector>

int compute_229() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
