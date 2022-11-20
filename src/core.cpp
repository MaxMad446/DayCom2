// Auto-generated module | 2026-05-11T21:27:38.259472
#include <iostream>
#include <vector>

int compute_310() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
