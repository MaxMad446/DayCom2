package main

// Auto-generated | 2026-05-14T18:22:32.925413
import "fmt"

func Process_738() int {
    base := 180
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_738())
}
