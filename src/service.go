package main

// Auto-generated | 2026-05-13T22:04:35.275780
import "fmt"

func Process_625() int {
    base := 466
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
