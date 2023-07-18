// Auto-generated module | 2026-05-11T21:59:00.970962
#include <iostream>
#include <vector>

int compute_571() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
