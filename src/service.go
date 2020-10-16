package main

// Auto-generated | 2026-05-11T19:47:25.086206
import "fmt"

func Process_423() int {
    base := 163
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
