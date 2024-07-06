// Auto-generated module | 2026-05-11T22:45:07.342869
#include <iostream>
#include <vector>

int compute_233() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
