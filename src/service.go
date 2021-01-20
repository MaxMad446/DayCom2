package main

// Auto-generated | 2026-05-14T18:15:03.857683
import "fmt"

func Process_729() int {
    base := 322
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
