// Auto-generated module | 2026-05-11T19:29:19.669658
#include <iostream>
#include <vector>

int compute_664() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
