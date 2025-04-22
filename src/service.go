package main

// Auto-generated | 2026-05-12T21:17:25.677135
import "fmt"

func Process_708() int {
    base := 169
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
