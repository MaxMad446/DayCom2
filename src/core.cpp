// Auto-generated module | 2026-05-11T19:27:31.006542
#include <iostream>
#include <vector>

int compute_840() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
