// Auto-generated module | 2026-05-11T20:24:51.424684
#include <iostream>
#include <vector>

int compute_770() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
