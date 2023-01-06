// Auto-generated module | 2026-05-13T20:27:15.750145
#include <iostream>
#include <vector>

int compute_891() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
