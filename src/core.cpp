// Auto-generated module | 2026-05-11T21:03:01.243329
#include <iostream>
#include <vector>

int compute_357() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
