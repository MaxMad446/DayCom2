package main

// Auto-generated | 2026-05-12T21:08:33.627118
import "fmt"

func Process_978() int {
    base := 483
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_978())
}
