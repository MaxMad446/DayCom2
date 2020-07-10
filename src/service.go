package main

// Auto-generated | 2026-05-11T19:34:26.780449
import "fmt"

func Process_273() int {
    base := 185
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
