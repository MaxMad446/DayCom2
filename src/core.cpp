// Auto-generated module | 2026-05-11T19:39:44.311066
#include <iostream>
#include <vector>

int compute_874() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
