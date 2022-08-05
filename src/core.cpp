// Auto-generated module | 2026-05-11T21:13:57.811789
#include <iostream>
#include <vector>

int compute_280() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
