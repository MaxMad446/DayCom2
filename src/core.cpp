// Auto-generated module | 2026-05-12T04:31:16.957410
#include <iostream>
#include <vector>

int compute_396() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
