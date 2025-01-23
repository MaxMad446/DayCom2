// Auto-generated module | 2026-05-12T03:55:50.071695
#include <iostream>
#include <vector>

int compute_547() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
