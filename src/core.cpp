// Auto-generated module | 2026-05-11T21:24:28.686715
#include <iostream>
#include <vector>

int compute_342() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
