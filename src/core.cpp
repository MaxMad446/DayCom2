// Auto-generated module | 2026-05-14T18:21:29.741952
#include <iostream>
#include <vector>

int compute_744() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
