// Auto-generated module | 2026-05-11T19:44:53.056006
#include <iostream>
#include <vector>

int compute_249() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
