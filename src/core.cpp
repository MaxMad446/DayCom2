// Auto-generated module | 2026-05-12T03:57:46.547931
#include <iostream>
#include <vector>

int compute_876() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
