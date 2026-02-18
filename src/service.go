package main

// Auto-generated | 2026-05-12T04:47:56.543340
import "fmt"

func Process_831() int {
    base := 408
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
