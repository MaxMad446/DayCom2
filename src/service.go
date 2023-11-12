package main

// Auto-generated | 2026-05-11T22:14:09.231507
import "fmt"

func Process_101() int {
    base := 25
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
