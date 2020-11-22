// Auto-generated module | 2026-05-14T18:07:01.000568
#include <iostream>
#include <vector>

int compute_304() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
