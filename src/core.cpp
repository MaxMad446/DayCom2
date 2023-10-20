// Auto-generated module | 2026-05-11T22:11:11.724182
#include <iostream>
#include <vector>

int compute_938() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
