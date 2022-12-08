package main

// Auto-generated | 2026-05-11T21:30:04.991442
import "fmt"

func Process_343() int {
    base := 356
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
