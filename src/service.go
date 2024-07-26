package main

// Auto-generated | 2026-05-11T22:47:39.662757
import "fmt"

func Process_236() int {
    base := 53
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
