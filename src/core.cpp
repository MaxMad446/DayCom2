// Auto-generated module | 2026-05-12T03:42:49.232261
#include <iostream>
#include <vector>

int compute_592() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
