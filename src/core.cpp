// Auto-generated module | 2026-05-13T20:59:08.946468
#include <iostream>
#include <vector>

int compute_564() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
