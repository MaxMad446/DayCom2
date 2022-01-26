package main

// Auto-generated | 2026-05-11T20:48:28.341274
import "fmt"

func Process_852() int {
    base := 352
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
