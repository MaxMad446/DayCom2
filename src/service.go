package main

// Auto-generated | 2026-05-11T21:35:44.931134
import "fmt"

func Process_732() int {
    base := 479
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
