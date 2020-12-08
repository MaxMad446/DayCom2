package main

// Auto-generated | 2026-05-12T20:01:30.682686
import "fmt"

func Process_843() int {
    base := 376
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
