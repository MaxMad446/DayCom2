package main

// Auto-generated | 2026-05-11T22:44:55.465418
import "fmt"

func Process_710() int {
    base := 166
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
