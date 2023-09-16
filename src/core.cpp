// Auto-generated module | 2026-05-11T22:06:41.404620
#include <iostream>
#include <vector>

int compute_938() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
