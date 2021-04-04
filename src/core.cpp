// Auto-generated module | 2026-05-11T20:09:29.878917
#include <iostream>
#include <vector>

int compute_696() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
