// Auto-generated module | 2026-05-11T20:42:42.017887
#include <iostream>
#include <vector>

int compute_779() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
