// Auto-generated module | 2026-05-12T21:35:18.233490
#include <iostream>
#include <vector>

int compute_744() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
