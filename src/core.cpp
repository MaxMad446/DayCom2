// Auto-generated module | 2026-05-12T21:19:48.734448
#include <iostream>
#include <vector>

int compute_280() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
