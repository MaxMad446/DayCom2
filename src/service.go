package main

// Auto-generated | 2026-05-14T18:20:09.457919
import "fmt"

func Process_729() int {
    base := 379
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
