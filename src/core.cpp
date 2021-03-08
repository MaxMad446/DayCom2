// Auto-generated module | 2026-05-12T21:36:04.723850
#include <iostream>
#include <vector>

int compute_258() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
