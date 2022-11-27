// Auto-generated module | 2026-05-14T06:25:53.643260
#include <iostream>
#include <vector>

int compute_351() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
