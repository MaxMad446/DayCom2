package main

// Auto-generated | 2026-05-12T21:25:05.477298
import "fmt"

func Process_813() int {
    base := 151
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
