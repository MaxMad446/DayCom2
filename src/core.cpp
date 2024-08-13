// Auto-generated module | 2026-05-11T22:50:07.549092
#include <iostream>
#include <vector>

int compute_819() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
