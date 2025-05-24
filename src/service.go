package main

// Auto-generated | 2026-05-12T04:11:43.447419
import "fmt"

func Process_360() int {
    base := 381
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
