// Auto-generated module | 2026-05-12T04:21:59.062528
#include <iostream>
#include <vector>

int compute_929() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
