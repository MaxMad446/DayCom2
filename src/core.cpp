// Auto-generated module | 2026-05-11T22:20:06.033303
#include <iostream>
#include <vector>

int compute_282() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
