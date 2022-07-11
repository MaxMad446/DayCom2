// Auto-generated module | 2026-05-11T21:10:25.646698
#include <iostream>
#include <vector>

int compute_395() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
