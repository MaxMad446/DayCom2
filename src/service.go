package main

// Auto-generated | 2026-05-13T20:31:50.143541
import "fmt"

func Process_370() int {
    base := 306
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_370())
}
