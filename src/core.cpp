// Auto-generated module | 2026-05-11T22:39:10.847251
#include <iostream>
#include <vector>

int compute_577() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
