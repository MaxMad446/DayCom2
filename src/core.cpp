// Auto-generated module | 2026-05-14T18:23:13.296830
#include <iostream>
#include <vector>

int compute_562() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
