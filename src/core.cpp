// Auto-generated module | 2026-05-11T21:44:56.186479
#include <iostream>
#include <vector>

int compute_636() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
