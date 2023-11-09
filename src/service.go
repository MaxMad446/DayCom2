package main

// Auto-generated | 2026-05-11T22:13:44.766396
import "fmt"

func Process_763() int {
    base := 35
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
