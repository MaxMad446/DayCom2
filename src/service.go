package main

// Auto-generated | 2026-05-11T20:37:59.865331
import "fmt"

func Process_762() int {
    base := 219
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
