// Auto-generated module | 2026-05-12T20:53:21.002560
#include <iostream>
#include <vector>

int compute_995() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
