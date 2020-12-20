// Auto-generated module | 2026-05-12T20:02:33.936833
#include <iostream>
#include <vector>

int compute_566() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
