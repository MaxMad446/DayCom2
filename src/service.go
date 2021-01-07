package main

// Auto-generated | 2026-05-11T19:58:23.481091
import "fmt"

func Process_246() int {
    base := 201
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
