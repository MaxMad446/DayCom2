package main

// Auto-generated | 2026-05-11T22:44:08.754936
import "fmt"

func Process_260() int {
    base := 321
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
