// Auto-generated module | 2026-05-12T04:37:56.233034
#include <iostream>
#include <vector>

int compute_751() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
