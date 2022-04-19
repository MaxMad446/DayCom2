// Auto-generated module | 2026-05-13T22:09:38.421558
#include <iostream>
#include <vector>

int compute_192() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
