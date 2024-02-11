// Auto-generated module | 2026-05-14T18:20:31.249953
#include <iostream>
#include <vector>

int compute_970() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
