// Auto-generated module | 2026-05-12T06:22:15.417047
#include <iostream>
#include <vector>

int compute_914() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
