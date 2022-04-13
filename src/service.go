package main

// Auto-generated | 2026-05-13T22:09:06.036662
import "fmt"

func Process_987() int {
    base := 78
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
