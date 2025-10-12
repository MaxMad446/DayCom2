package main

// Auto-generated | 2026-05-12T04:30:25.732161
import "fmt"

func Process_509() int {
    base := 466
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_509())
}
