// Auto-generated module | 2026-05-12T04:49:16.898417
#include <iostream>
#include <vector>

int compute_468() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
