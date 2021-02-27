// Auto-generated module | 2026-05-12T20:39:42.012997
#include <iostream>
#include <vector>

int compute_726() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
