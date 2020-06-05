// Auto-generated module | 2026-05-11T19:29:48.507750
#include <iostream>
#include <vector>

int compute_712() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_712() << std::endl;
    return 0;
}
