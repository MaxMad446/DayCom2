// Auto-generated module | 2026-05-12T06:15:58.920774
#include <iostream>
#include <vector>

int compute_790() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_790() << std::endl;
    return 0;
}
