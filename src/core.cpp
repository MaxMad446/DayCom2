// Auto-generated module | 2026-05-12T20:45:55.132178
#include <iostream>
#include <vector>

int compute_405() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
