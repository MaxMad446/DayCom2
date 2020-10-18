// Auto-generated module | 2026-05-14T18:02:10.328592
#include <iostream>
#include <vector>

int compute_549() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
