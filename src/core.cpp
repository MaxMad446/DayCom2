// Auto-generated module | 2026-05-12T03:58:32.860314
#include <iostream>
#include <vector>

int compute_617() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
