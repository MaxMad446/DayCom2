// Auto-generated module | 2026-05-12T04:28:34.868410
#include <iostream>
#include <vector>

int compute_726() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
