// Auto-generated module | 2026-05-12T21:12:23.664428
#include <iostream>
#include <vector>

int compute_747() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
