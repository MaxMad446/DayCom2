// Auto-generated module | 2026-05-12T03:41:00.852003
#include <iostream>
#include <vector>

int compute_636() {
    int base = 252;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
