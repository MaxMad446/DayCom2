// Auto-generated module | 2026-05-13T22:09:32.821547
#include <iostream>
#include <vector>

int compute_661() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
