// Auto-generated module | 2026-05-12T04:15:44.073438
#include <iostream>
#include <vector>

int compute_687() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
