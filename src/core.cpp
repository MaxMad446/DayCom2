// Auto-generated module | 2026-05-11T20:31:54.096230
#include <iostream>
#include <vector>

int compute_691() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
