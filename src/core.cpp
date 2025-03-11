// Auto-generated module | 2026-05-12T04:02:09.244006
#include <iostream>
#include <vector>

int compute_359() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
