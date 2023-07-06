package main

// Auto-generated | 2026-05-11T21:57:27.292802
import "fmt"

func Process_197() int {
    base := 170
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_197())
}
