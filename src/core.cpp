// Auto-generated module | 2026-05-12T03:45:28.632296
#include <iostream>
#include <vector>

int compute_747() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
