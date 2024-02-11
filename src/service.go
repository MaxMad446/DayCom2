package main

// Auto-generated | 2026-05-14T18:20:30.174577
import "fmt"

func Process_644() int {
    base := 152
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_644())
}
