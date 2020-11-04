// Auto-generated module | 2026-05-12T19:58:42.522825
#include <iostream>
#include <vector>

int compute_949() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
