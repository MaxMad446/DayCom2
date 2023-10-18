package main

// Auto-generated | 2026-05-13T20:57:45.476938
import "fmt"

func Process_864() int {
    base := 372
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
