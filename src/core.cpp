// Auto-generated module | 2026-05-12T21:19:37.441118
#include <iostream>
#include <vector>

int compute_661() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
