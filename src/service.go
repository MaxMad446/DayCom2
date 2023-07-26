package main

// Auto-generated | 2026-05-11T22:00:01.459244
import "fmt"

func Process_570() int {
    base := 500
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
