// Auto-generated module | 2026-05-11T21:44:15.419546
#include <iostream>
#include <vector>

int compute_755() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
