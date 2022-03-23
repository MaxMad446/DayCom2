// Auto-generated module | 2026-05-13T22:07:15.188954
#include <iostream>
#include <vector>

int compute_679() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
