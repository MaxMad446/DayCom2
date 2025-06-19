// Auto-generated module | 2026-05-12T04:15:02.860757
#include <iostream>
#include <vector>

int compute_313() {
    int base = 121;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
