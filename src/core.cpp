// Auto-generated module | 2026-05-13T20:47:01.384169
#include <iostream>
#include <vector>

int compute_670() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
