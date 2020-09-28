// Auto-generated module | 2026-05-11T19:45:01.621274
#include <iostream>
#include <vector>

int compute_460() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
