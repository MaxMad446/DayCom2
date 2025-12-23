package main

// Auto-generated | 2026-05-12T04:40:11.970527
import "fmt"

func Process_441() int {
    base := 314
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_441())
}
