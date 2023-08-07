// Auto-generated module | 2026-05-11T22:01:25.980015
#include <iostream>
#include <vector>

int compute_680() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
