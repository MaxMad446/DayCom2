// Auto-generated module | 2026-05-12T04:19:53.670364
#include <iostream>
#include <vector>

int compute_123() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
