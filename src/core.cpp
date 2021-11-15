// Auto-generated module | 2026-05-12T21:01:36.824396
#include <iostream>
#include <vector>

int compute_568() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
