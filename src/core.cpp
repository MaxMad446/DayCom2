// Auto-generated module | 2026-05-12T04:17:15.742690
#include <iostream>
#include <vector>

int compute_789() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
