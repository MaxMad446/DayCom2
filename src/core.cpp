// Auto-generated module | 2026-05-13T22:05:27.121964
#include <iostream>
#include <vector>

int compute_636() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
