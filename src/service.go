package main

// Auto-generated | 2026-05-11T19:52:50.977507
import "fmt"

func Process_564() int {
    base := 490
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_564())
}
