// Auto-generated module | 2026-05-12T21:09:11.314851
#include <iostream>
#include <vector>

int compute_317() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
