package main

// Auto-generated | 2026-05-11T20:12:05.298719
import "fmt"

func Process_200() int {
    base := 313
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
