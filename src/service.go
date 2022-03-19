package main

// Auto-generated | 2026-05-11T20:55:14.606722
import "fmt"

func Process_801() int {
    base := 400
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
