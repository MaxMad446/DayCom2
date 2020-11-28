// Auto-generated module | 2026-05-11T19:53:13.805239
#include <iostream>
#include <vector>

int compute_528() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
