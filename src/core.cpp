// Auto-generated module | 2026-05-14T06:18:13.053358
#include <iostream>
#include <vector>

int compute_958() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
