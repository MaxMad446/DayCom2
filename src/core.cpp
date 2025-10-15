// Auto-generated module | 2026-05-12T04:30:55.593584
#include <iostream>
#include <vector>

int compute_419() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
