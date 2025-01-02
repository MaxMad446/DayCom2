// Auto-generated module | 2026-05-12T03:53:11.828430
#include <iostream>
#include <vector>

int compute_796() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_796() << std::endl;
    return 0;
}
