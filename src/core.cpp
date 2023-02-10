// Auto-generated module | 2026-05-13T20:30:18.864844
#include <iostream>
#include <vector>

int compute_273() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
