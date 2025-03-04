// Auto-generated module | 2026-05-12T04:01:21.219400
#include <iostream>
#include <vector>

int compute_955() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
