// Auto-generated module | 2026-05-12T04:34:42.715252
#include <iostream>
#include <vector>

int compute_250() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
