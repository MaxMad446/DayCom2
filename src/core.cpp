// Auto-generated module | 2026-05-11T21:35:25.743816
#include <iostream>
#include <vector>

int compute_923() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
