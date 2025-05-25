// Auto-generated module | 2026-05-12T04:11:52.721190
#include <iostream>
#include <vector>

int compute_359() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
