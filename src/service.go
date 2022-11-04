package main

// Auto-generated | 2026-05-11T21:25:29.025859
import "fmt"

func Process_904() int {
    base := 269
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
