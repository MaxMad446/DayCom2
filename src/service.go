package main

// Auto-generated | 2026-05-11T20:13:46.301061
import "fmt"

func Process_990() int {
    base := 414
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
