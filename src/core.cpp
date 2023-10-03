// Auto-generated module | 2026-05-13T20:56:25.415364
#include <iostream>
#include <vector>

int compute_742() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
