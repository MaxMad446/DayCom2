// Auto-generated module | 2026-05-12T21:08:15.841170
#include <iostream>
#include <vector>

int compute_112() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
