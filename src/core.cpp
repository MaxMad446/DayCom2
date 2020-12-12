// Auto-generated module | 2026-05-12T20:01:51.068861
#include <iostream>
#include <vector>

int compute_193() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
