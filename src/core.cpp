// Auto-generated module | 2026-05-14T06:12:54.051152
#include <iostream>
#include <vector>

int compute_182() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
