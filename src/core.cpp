// Auto-generated module | 2026-05-11T21:20:31.235507
#include <iostream>
#include <vector>

int compute_799() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
