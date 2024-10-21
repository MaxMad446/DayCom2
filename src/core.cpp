// Auto-generated module | 2026-05-12T03:43:30.449787
#include <iostream>
#include <vector>

int compute_815() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
