// Auto-generated module | 2026-05-12T03:45:10.468746
#include <iostream>
#include <vector>

int compute_514() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
