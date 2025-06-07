// Auto-generated module | 2026-05-12T21:21:20.313698
#include <iostream>
#include <vector>

int compute_528() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
