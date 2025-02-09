// Auto-generated module | 2026-05-12T21:11:30.217755
#include <iostream>
#include <vector>

int compute_879() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
