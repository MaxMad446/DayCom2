// Auto-generated module | 2026-05-14T18:12:37.505661
#include <iostream>
#include <vector>

int compute_680() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
