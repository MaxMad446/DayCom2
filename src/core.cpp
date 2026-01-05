// Auto-generated module | 2026-05-12T04:42:00.833270
#include <iostream>
#include <vector>

int compute_483() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
