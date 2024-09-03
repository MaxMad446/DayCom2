// Auto-generated module | 2026-05-11T22:52:38.512883
#include <iostream>
#include <vector>

int compute_820() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
