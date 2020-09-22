// Auto-generated module | 2026-05-11T19:44:13.180417
#include <iostream>
#include <vector>

int compute_268() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_268() << std::endl;
    return 0;
}
