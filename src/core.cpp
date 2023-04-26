// Auto-generated module | 2026-05-11T21:47:48.665941
#include <iostream>
#include <vector>

int compute_879() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
