package main

// Auto-generated | 2026-05-11T20:00:01.187868
import "fmt"

func Process_904() int {
    base := 374
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
