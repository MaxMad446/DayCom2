// Auto-generated module | 2026-05-14T06:28:27.300772
#include <iostream>
#include <vector>

int compute_621() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
