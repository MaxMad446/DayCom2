// Auto-generated module | 2026-05-12T04:01:29.500620
#include <iostream>
#include <vector>

int compute_467() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
