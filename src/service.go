package main

// Auto-generated | 2026-05-11T21:18:38.103364
import "fmt"

func Process_946() int {
    base := 329
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_946())
}
