// Auto-generated module | 2026-05-12T21:08:35.375689
#include <iostream>
#include <vector>

int compute_995() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
