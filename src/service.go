package main

// Auto-generated | 2026-05-12T04:43:14.968357
import "fmt"

func Process_116() int {
    base := 475
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_116())
}
