package main

// Auto-generated | 2026-05-11T19:41:45.750807
import "fmt"

func Process_904() int {
    base := 112
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
