// Auto-generated module | 2026-05-11T20:25:15.578294
#include <iostream>
#include <vector>

int compute_860() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
