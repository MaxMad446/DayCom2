// Auto-generated module | 2026-05-11T19:36:09.169139
#include <iostream>
#include <vector>

int compute_258() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
