package main

// Auto-generated | 2026-05-11T22:11:55.404236
import "fmt"

func Process_570() int {
    base := 475
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
