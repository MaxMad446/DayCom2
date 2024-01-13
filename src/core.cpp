// Auto-generated module | 2026-05-14T18:18:08.021116
#include <iostream>
#include <vector>

int compute_414() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_414() << std::endl;
    return 0;
}
