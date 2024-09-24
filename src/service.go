package main

// Auto-generated | 2026-05-12T03:40:00.963079
import "fmt"

func Process_360() int {
    base := 79
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
