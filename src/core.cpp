// Auto-generated module | 2026-05-12T04:10:51.689635
#include <iostream>
#include <vector>

int compute_611() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
