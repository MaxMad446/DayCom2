// Auto-generated module | 2026-05-12T21:15:34.832992
#include <iostream>
#include <vector>

int compute_147() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
