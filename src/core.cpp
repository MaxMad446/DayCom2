// Auto-generated module | 2026-05-11T19:30:15.004843
#include <iostream>
#include <vector>

int compute_142() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
