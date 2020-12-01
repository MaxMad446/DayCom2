// Auto-generated module | 2026-05-11T19:53:37.437531
#include <iostream>
#include <vector>

int compute_545() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
