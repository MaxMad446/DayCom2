// Auto-generated module | 2026-05-14T06:15:25.224280
#include <iostream>
#include <vector>

int compute_385() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
