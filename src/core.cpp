// Auto-generated module | 2026-05-11T21:49:18.406950
#include <iostream>
#include <vector>

int compute_788() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
