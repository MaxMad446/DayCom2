// Auto-generated module | 2026-05-12T04:09:01.604718
#include <iostream>
#include <vector>

int compute_243() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
