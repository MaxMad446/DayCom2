package main

// Auto-generated | 2026-05-11T22:26:29.209236
import "fmt"

func Process_284() int {
    base := 475
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
