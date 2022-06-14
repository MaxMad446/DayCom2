// Auto-generated module | 2026-05-14T06:12:16.641599
#include <iostream>
#include <vector>

int compute_573() {
    int base = 431;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_573() << std::endl;
    return 0;
}
