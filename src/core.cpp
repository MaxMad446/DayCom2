// Auto-generated module | 2026-05-12T21:16:51.299960
#include <iostream>
#include <vector>

int compute_350() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
