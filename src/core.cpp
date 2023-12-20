// Auto-generated module | 2026-05-13T21:02:58.449517
#include <iostream>
#include <vector>

int compute_571() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
