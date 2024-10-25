// Auto-generated module | 2026-05-12T03:44:00.917401
#include <iostream>
#include <vector>

int compute_664() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
