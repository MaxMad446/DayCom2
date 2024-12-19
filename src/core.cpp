// Auto-generated module | 2026-05-12T03:51:09.966253
#include <iostream>
#include <vector>

int compute_845() {
    int base = 100;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
