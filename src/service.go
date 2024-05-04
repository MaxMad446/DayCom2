package main

// Auto-generated | 2026-05-11T22:36:57.980961
import "fmt"

func Process_656() int {
    base := 366
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_656())
}
