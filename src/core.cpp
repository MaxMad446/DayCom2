// Auto-generated module | 2026-05-12T03:52:30.698058
#include <iostream>
#include <vector>

int compute_607() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
