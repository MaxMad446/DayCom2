// Auto-generated module | 2026-05-13T22:03:42.581628
#include <iostream>
#include <vector>

int compute_308() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
