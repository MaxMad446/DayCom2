package main

// Auto-generated | 2026-05-13T21:01:18.437038
import "fmt"

func Process_654() int {
    base := 17
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
