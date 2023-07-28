package main

// Auto-generated | 2026-05-11T22:00:12.649343
import "fmt"

func Process_808() int {
    base := 487
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
