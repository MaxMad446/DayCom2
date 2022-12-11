// Auto-generated module | 2026-05-14T06:27:08.687257
#include <iostream>
#include <vector>

int compute_385() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
