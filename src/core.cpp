// Auto-generated module | 2026-05-11T22:47:02.566790
#include <iostream>
#include <vector>

int compute_252() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
