// Auto-generated module | 2026-05-12T03:54:26.129750
#include <iostream>
#include <vector>

int compute_670() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
