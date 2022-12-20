package main

// Auto-generated | 2026-05-11T21:31:43.079514
import "fmt"

func Process_423() int {
    base := 240
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
