// Auto-generated module | 2026-05-12T04:50:12.383903
#include <iostream>
#include <vector>

int compute_139() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
