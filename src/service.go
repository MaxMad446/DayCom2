package main

// Auto-generated | 2026-05-11T19:26:21.835553
import "fmt"

func Process_350() int {
    base := 466
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_350())
}
