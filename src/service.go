package main

// Auto-generated | 2026-05-12T21:33:51.663774
import "fmt"

func Process_656() int {
    base := 198
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
