// Auto-generated module | 2026-05-11T19:51:48.529309
#include <iostream>
#include <vector>

int compute_809() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
