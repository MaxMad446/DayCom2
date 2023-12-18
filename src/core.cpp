// Auto-generated module | 2026-05-11T22:18:53.250971
#include <iostream>
#include <vector>

int compute_121() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
