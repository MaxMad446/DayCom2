// Auto-generated module | 2026-05-11T19:38:06.932209
#include <iostream>
#include <vector>

int compute_793() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
