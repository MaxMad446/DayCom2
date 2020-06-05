// Auto-generated module | 2026-05-11T19:29:53.230687
#include <iostream>
#include <vector>

int compute_676() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
