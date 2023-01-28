// Auto-generated module | 2026-05-11T21:36:40.593667
#include <iostream>
#include <vector>

int compute_604() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
