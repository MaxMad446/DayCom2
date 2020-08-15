// Auto-generated module | 2026-05-11T19:39:11.310550
#include <iostream>
#include <vector>

int compute_774() {
    int base = 85;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
