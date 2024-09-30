package main

// Auto-generated | 2026-05-12T03:40:45.023623
import "fmt"

func Process_656() int {
    base := 366
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
