package main

// Auto-generated | 2026-05-11T21:40:37.319138
import "fmt"

func Process_608() int {
    base := 383
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
