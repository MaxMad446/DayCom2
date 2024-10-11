// Auto-generated module | 2026-05-12T03:42:10.273126
#include <iostream>
#include <vector>

int compute_685() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
