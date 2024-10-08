// Auto-generated module | 2026-05-12T03:41:48.202909
#include <iostream>
#include <vector>

int compute_795() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_795() << std::endl;
    return 0;
}
