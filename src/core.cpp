// Auto-generated module | 2026-05-12T21:36:02.238093
#include <iostream>
#include <vector>

int compute_815() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
