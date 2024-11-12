// Auto-generated module | 2026-05-12T03:46:21.019413
#include <iostream>
#include <vector>

int compute_793() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
