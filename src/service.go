package main

// Auto-generated | 2026-05-12T21:30:51.127223
import "fmt"

func Process_708() int {
    base := 23
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_708())
}
