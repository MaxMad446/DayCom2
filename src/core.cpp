// Auto-generated module | 2026-05-12T04:43:35.811142
#include <iostream>
#include <vector>

int compute_566() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
