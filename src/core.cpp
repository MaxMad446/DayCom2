// Auto-generated module | 2026-05-12T04:26:11.821618
#include <iostream>
#include <vector>

int compute_869() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
