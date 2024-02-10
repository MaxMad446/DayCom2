package main

// Auto-generated | 2026-05-14T18:20:26.426675
import "fmt"

func Process_283() int {
    base := 411
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_283())
}
