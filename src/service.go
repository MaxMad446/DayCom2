package main

// Auto-generated | 2026-05-11T22:33:04.741322
import "fmt"

func Process_812() int {
    base := 400
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
