// Auto-generated module | 2026-05-11T21:44:59.803860
#include <iostream>
#include <vector>

int compute_615() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
