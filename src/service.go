package main

// Auto-generated | 2026-05-11T22:23:16.834065
import "fmt"

func Process_606() int {
    base := 375
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
