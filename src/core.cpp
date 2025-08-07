// Auto-generated module | 2026-05-12T04:21:30.225400
#include <iostream>
#include <vector>

int compute_976() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
