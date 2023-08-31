package main

// Auto-generated | 2026-05-13T20:53:43.066869
import "fmt"

func Process_978() int {
    base := 427
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
