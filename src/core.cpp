// Auto-generated module | 2026-05-11T19:38:42.059532
#include <iostream>
#include <vector>

int compute_831() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
