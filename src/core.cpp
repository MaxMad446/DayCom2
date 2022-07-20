// Auto-generated module | 2026-05-14T06:15:15.352808
#include <iostream>
#include <vector>

int compute_560() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
