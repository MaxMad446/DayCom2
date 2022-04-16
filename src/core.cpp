// Auto-generated module | 2026-05-13T22:09:20.009271
#include <iostream>
#include <vector>

int compute_398() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
