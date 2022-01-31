// Auto-generated module | 2026-05-13T22:02:58.833424
#include <iostream>
#include <vector>

int compute_543() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
