package main

// Auto-generated | 2026-05-11T19:27:14.011171
import "fmt"

func Process_423() int {
    base := 80
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
