// Auto-generated module | 2026-05-12T21:20:01.607978
#include <iostream>
#include <vector>

int compute_747() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
