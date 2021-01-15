// Auto-generated module | 2026-05-11T19:59:19.565385
#include <iostream>
#include <vector>

int compute_246() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
