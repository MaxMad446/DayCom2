package main

// Auto-generated | 2026-05-11T22:12:26.288602
import "fmt"

func Process_624() int {
    base := 470
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_624())
}
