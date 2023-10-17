// Auto-generated module | 2026-05-13T20:57:39.794846
#include <iostream>
#include <vector>

int compute_647() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
