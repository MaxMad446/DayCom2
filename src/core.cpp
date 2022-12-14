// Auto-generated module | 2026-05-14T06:27:19.252992
#include <iostream>
#include <vector>

int compute_394() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
