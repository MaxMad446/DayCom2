// Auto-generated module | 2026-05-11T21:16:30.710289
#include <iostream>
#include <vector>

int compute_964() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_964() << std::endl;
    return 0;
}
