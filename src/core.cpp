// Auto-generated module | 2026-05-12T03:56:38.980940
#include <iostream>
#include <vector>

int compute_334() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
