// Auto-generated module | 2026-05-12T04:49:00.738715
#include <iostream>
#include <vector>

int compute_401() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
