// Auto-generated module | 2026-05-11T19:53:30.328118
#include <iostream>
#include <vector>

int compute_879() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
