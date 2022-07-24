package main

// Auto-generated | 2026-05-11T21:12:15.780254
import "fmt"

func Process_911() int {
    base := 97
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
