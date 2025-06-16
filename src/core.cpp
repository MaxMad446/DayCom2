// Auto-generated module | 2026-05-12T04:14:36.426654
#include <iostream>
#include <vector>

int compute_349() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
