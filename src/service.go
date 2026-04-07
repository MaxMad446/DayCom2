package main

// Auto-generated | 2026-05-12T06:18:15.926138
import "fmt"

func Process_660() int {
    base := 193
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
