// Auto-generated module | 2026-05-11T19:28:35.398737
#include <iostream>
#include <vector>

int compute_258() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
