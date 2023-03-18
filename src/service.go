package main

// Auto-generated | 2026-05-13T20:33:26.773230
import "fmt"

func Process_320() int {
    base := 496
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
