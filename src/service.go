package main

// Auto-generated | 2026-05-11T21:01:36.393075
import "fmt"

func Process_193() int {
    base := 204
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
