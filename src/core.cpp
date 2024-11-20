// Auto-generated module | 2026-05-12T03:47:25.843263
#include <iostream>
#include <vector>

int compute_242() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
