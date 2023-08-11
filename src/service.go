package main

// Auto-generated | 2026-05-13T20:52:03.532507
import "fmt"

func Process_322() int {
    base := 450
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_322())
}
