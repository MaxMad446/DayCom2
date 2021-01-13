package main

// Auto-generated | 2026-05-12T21:31:49.338805
import "fmt"

func Process_576() int {
    base := 355
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
