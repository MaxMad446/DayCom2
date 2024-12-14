// Auto-generated module | 2026-05-12T03:50:36.695789
#include <iostream>
#include <vector>

int compute_804() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
