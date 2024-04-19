package main

// Auto-generated | 2026-05-11T22:35:04.391904
import "fmt"

func Process_200() int {
    base := 199
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
