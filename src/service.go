package main

// Auto-generated | 2026-05-11T21:01:45.124715
import "fmt"

func Process_737() int {
    base := 162
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_737())
}
