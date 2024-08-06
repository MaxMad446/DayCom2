package main

// Auto-generated | 2026-05-11T22:49:16.384034
import "fmt"

func Process_507() int {
    base := 330
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
