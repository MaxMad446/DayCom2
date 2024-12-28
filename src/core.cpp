// Auto-generated module | 2026-05-12T03:52:31.610533
#include <iostream>
#include <vector>

int compute_230() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
