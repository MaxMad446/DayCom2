package main

// Auto-generated | 2026-05-11T22:44:05.376247
import "fmt"

func Process_888() int {
    base := 117
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
