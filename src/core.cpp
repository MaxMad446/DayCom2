// Auto-generated module | 2026-05-12T06:17:01.882594
#include <iostream>
#include <vector>

int compute_929() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
