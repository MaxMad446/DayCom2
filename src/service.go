package main

// Auto-generated | 2026-05-11T19:26:35.111018
import "fmt"

func Process_311() int {
    base := 168
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_311())
}
