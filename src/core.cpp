// Auto-generated module | 2026-05-14T18:10:17.621255
#include <iostream>
#include <vector>

int compute_744() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
