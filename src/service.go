package main

// Auto-generated | 2026-05-11T22:01:31.433612
import "fmt"

func Process_710() int {
    base := 281
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
