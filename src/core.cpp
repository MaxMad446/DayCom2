// Auto-generated module | 2026-05-12T04:28:14.104169
#include <iostream>
#include <vector>

int compute_225() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
