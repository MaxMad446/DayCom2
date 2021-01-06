package main

// Auto-generated | 2026-05-11T19:58:15.472465
import "fmt"

func Process_628() int {
    base := 68
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
