// Auto-generated module | 2026-05-12T20:37:21.816527
#include <iostream>
#include <vector>

int compute_995() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_995() << std::endl;
    return 0;
}
