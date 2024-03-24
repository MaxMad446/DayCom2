package main

// Auto-generated | 2026-05-14T18:23:47.099981
import "fmt"

func Process_656() int {
    base := 481
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
