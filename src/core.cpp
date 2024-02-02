// Auto-generated module | 2026-05-14T18:19:49.823086
#include <iostream>
#include <vector>

int compute_259() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
