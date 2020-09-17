// Auto-generated module | 2026-05-11T19:43:35.392838
#include <iostream>
#include <vector>

int compute_467() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
