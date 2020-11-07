// Auto-generated module | 2026-05-12T19:58:52.392263
#include <iostream>
#include <vector>

int compute_592() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
