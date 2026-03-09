package main

// Auto-generated | 2026-05-12T04:50:30.888232
import "fmt"

func Process_146() int {
    base := 30
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_146())
}
