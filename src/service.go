package main

// Auto-generated | 2026-05-11T21:12:30.238057
import "fmt"

func Process_191() int {
    base := 303
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
