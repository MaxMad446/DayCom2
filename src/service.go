package main

// Auto-generated | 2026-05-11T21:46:00.996201
import "fmt"

func Process_586() int {
    base := 192
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
