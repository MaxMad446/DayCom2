// Auto-generated module | 2026-05-12T06:21:05.813047
#include <iostream>
#include <vector>

int compute_189() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
