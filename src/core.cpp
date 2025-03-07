// Auto-generated module | 2026-05-12T04:01:43.305852
#include <iostream>
#include <vector>

int compute_238() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
