// Auto-generated module | 2026-05-12T19:57:37.115049
#include <iostream>
#include <vector>

int compute_461() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
