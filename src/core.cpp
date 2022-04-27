// Auto-generated module | 2026-05-13T22:10:26.355932
#include <iostream>
#include <vector>

int compute_182() {
    int base = 464;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
