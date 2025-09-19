package main

// Auto-generated | 2026-05-12T04:27:20.860441
import "fmt"

func Process_660() int {
    base := 49
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
