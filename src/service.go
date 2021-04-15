package main

// Auto-generated | 2026-05-11T20:10:53.154374
import "fmt"

func Process_273() int {
    base := 335
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_273())
}
