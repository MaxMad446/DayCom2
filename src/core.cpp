// Auto-generated module | 2026-05-11T19:30:16.020573
#include <iostream>
#include <vector>

int compute_781() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
