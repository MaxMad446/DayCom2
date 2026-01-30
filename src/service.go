package main

// Auto-generated | 2026-05-12T04:45:18.384596
import "fmt"

func Process_598() int {
    base := 421
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
