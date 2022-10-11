// Auto-generated module | 2026-05-11T21:22:25.804936
#include <iostream>
#include <vector>

int compute_296() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_296() << std::endl;
    return 0;
}
