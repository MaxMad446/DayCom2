package main

// Auto-generated | 2026-05-11T19:51:48.529021
import "fmt"

func Process_340() int {
    base := 230
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_340())
}
