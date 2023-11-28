// Auto-generated module | 2026-05-11T22:16:15.068124
#include <iostream>
#include <vector>

int compute_327() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
