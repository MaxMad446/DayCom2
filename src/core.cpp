// Auto-generated module | 2026-05-14T18:05:23.098425
#include <iostream>
#include <vector>

int compute_653() {
    int base = 446;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
