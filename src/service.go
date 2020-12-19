package main

// Auto-generated | 2026-05-11T19:55:55.467414
import "fmt"

func Process_608() int {
    base := 20
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
