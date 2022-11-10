package main

// Auto-generated | 2026-05-11T21:26:16.207136
import "fmt"

func Process_570() int {
    base := 293
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
