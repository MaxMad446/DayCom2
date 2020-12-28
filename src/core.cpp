// Auto-generated module | 2026-05-11T19:57:03.843318
#include <iostream>
#include <vector>

int compute_609() {
    int base = 368;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
