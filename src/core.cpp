// Auto-generated module | 2026-05-13T21:01:21.088187
#include <iostream>
#include <vector>

int compute_166() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
