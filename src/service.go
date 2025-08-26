package main

// Auto-generated | 2026-05-12T21:28:22.778790
import "fmt"

func Process_878() int {
    base := 432
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
