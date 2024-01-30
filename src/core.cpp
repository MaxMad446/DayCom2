// Auto-generated module | 2026-05-11T22:24:27.193248
#include <iostream>
#include <vector>

int compute_398() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
