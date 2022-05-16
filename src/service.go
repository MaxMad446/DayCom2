package main

// Auto-generated | 2026-05-13T22:12:03.746539
import "fmt"

func Process_852() int {
    base := 424
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
