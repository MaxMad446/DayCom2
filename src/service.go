package main

// Auto-generated | 2026-05-12T20:02:52.388368
import "fmt"

func Process_843() int {
    base := 334
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
