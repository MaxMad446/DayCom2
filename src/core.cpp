// Auto-generated module | 2026-05-12T06:19:22.886825
#include <iostream>
#include <vector>

int compute_442() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
