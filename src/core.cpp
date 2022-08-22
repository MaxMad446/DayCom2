// Auto-generated module | 2026-05-14T06:17:46.536482
#include <iostream>
#include <vector>

int compute_501() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
