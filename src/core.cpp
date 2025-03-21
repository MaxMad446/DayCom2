// Auto-generated module | 2026-05-12T04:03:22.801537
#include <iostream>
#include <vector>

int compute_971() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
