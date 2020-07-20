package main

// Auto-generated | 2026-05-11T19:35:41.490781
import "fmt"

func Process_558() int {
    base := 370
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_558())
}
