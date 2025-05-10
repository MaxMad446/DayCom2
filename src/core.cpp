// Auto-generated module | 2026-05-12T04:09:56.297630
#include <iostream>
#include <vector>

int compute_755() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
