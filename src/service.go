package main

// Auto-generated | 2026-05-12T04:14:45.167947
import "fmt"

func Process_614() int {
    base := 455
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_614())
}
