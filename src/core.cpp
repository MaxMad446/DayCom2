// Auto-generated module | 2026-05-12T06:20:51.670952
#include <iostream>
#include <vector>

int compute_938() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
