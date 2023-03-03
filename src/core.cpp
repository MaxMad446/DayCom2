// Auto-generated module | 2026-05-11T21:40:59.738099
#include <iostream>
#include <vector>

int compute_231() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
