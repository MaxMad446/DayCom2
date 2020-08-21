package main

// Auto-generated | 2026-05-11T19:40:02.257329
import "fmt"

func Process_880() int {
    base := 369
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
