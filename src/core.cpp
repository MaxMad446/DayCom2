// Auto-generated module | 2026-05-11T19:28:11.870620
#include <iostream>
#include <vector>

int compute_444() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
