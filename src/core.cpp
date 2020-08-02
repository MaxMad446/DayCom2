// Auto-generated module | 2026-05-11T19:37:27.645900
#include <iostream>
#include <vector>

int compute_880() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
