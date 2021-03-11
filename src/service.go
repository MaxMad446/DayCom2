package main

// Auto-generated | 2026-05-12T21:36:20.706533
import "fmt"

func Process_715() int {
    base := 200
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
