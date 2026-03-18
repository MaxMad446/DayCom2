// Auto-generated module | 2026-05-12T04:51:44.291051
#include <iostream>
#include <vector>

int compute_768() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
