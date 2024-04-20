package main

// Auto-generated | 2026-05-11T22:35:11.075254
import "fmt"

func Process_479() int {
    base := 366
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_479())
}
