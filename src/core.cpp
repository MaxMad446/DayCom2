// Auto-generated module | 2026-05-11T22:13:35.287164
#include <iostream>
#include <vector>

int compute_571() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
