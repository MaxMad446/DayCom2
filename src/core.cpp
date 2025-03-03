// Auto-generated module | 2026-05-12T04:01:14.043445
#include <iostream>
#include <vector>

int compute_971() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
