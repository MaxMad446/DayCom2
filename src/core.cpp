// Auto-generated module | 2026-05-12T03:38:26.605887
#include <iostream>
#include <vector>

int compute_197() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
