package main

// Auto-generated | 2026-05-11T20:53:06.684226
import "fmt"

func Process_292() int {
    base := 135
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
