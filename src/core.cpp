// Auto-generated module | 2026-05-12T21:25:25.795747
#include <iostream>
#include <vector>

int compute_619() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
