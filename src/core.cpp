// Auto-generated module | 2026-05-12T04:11:06.828235
#include <iostream>
#include <vector>

int compute_599() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_599() << std::endl;
    return 0;
}
