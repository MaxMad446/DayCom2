// Auto-generated module | 2026-05-11T20:04:01.724565
#include <iostream>
#include <vector>

int compute_811() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
