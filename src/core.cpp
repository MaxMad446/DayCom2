// Auto-generated module | 2026-05-11T20:09:31.545067
#include <iostream>
#include <vector>

int compute_430() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
