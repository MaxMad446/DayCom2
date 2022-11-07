// Auto-generated module | 2026-05-14T06:24:08.528978
#include <iostream>
#include <vector>

int compute_943() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
