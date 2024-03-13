// Auto-generated module | 2026-05-14T18:23:00.814537
#include <iostream>
#include <vector>

int compute_189() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
