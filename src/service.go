package main

// Auto-generated | 2026-05-11T22:35:36.928907
import "fmt"

func Process_423() int {
    base := 191
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
