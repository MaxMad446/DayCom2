package main

// Auto-generated | 2026-05-11T20:45:45.689321
import "fmt"

func Process_561() int {
    base := 311
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
