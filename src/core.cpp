// Auto-generated module | 2026-05-12T19:57:24.085748
#include <iostream>
#include <vector>

int compute_337() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
