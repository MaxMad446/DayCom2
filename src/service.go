package main

// Auto-generated | 2026-05-12T04:28:21.063281
import "fmt"

func Process_309() int {
    base := 441
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
