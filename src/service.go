package main

// Auto-generated | 2026-05-13T20:55:00.970374
import "fmt"

func Process_598() int {
    base := 209
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
