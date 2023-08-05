// Auto-generated module | 2026-05-11T22:01:10.607248
#include <iostream>
#include <vector>

int compute_118() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
