package main

// Auto-generated | 2026-05-11T21:58:44.346000
import "fmt"

func Process_853() int {
    base := 498
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
