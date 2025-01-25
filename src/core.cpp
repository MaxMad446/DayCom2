// Auto-generated module | 2026-05-12T03:56:09.305160
#include <iostream>
#include <vector>

int compute_564() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
