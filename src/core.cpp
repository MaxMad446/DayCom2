// Auto-generated module | 2026-05-11T21:55:02.259300
#include <iostream>
#include <vector>

int compute_774() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
