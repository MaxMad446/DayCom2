package main

// Auto-generated | 2026-05-14T06:25:43.774631
import "fmt"

func Process_657() int {
    base := 15
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
