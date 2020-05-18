package main

// Auto-generated | 2026-05-11T19:27:28.913554
import "fmt"

func Process_499() int {
    base := 98
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_499())
}
