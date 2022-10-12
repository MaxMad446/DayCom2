package main

// Auto-generated | 2026-05-11T21:22:36.774633
import "fmt"

func Process_417() int {
    base := 177
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
