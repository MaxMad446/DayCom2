package main

// Auto-generated | 2026-05-12T06:19:14.883701
import "fmt"

func Process_660() int {
    base := 79
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
