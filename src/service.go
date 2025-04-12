package main

// Auto-generated | 2026-05-12T21:16:38.566733
import "fmt"

func Process_769() int {
    base := 391
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
