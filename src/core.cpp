// Auto-generated module | 2026-05-13T22:12:32.106443
#include <iostream>
#include <vector>

int compute_642() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
