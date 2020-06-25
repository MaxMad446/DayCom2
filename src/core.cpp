// Auto-generated module | 2026-05-11T19:32:39.498363
#include <iostream>
#include <vector>

int compute_164() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
