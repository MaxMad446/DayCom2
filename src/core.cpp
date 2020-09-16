// Auto-generated module | 2026-05-11T19:43:29.849071
#include <iostream>
#include <vector>

int compute_890() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
