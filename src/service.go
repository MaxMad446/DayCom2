package main

// Auto-generated | 2026-05-11T22:13:30.215451
import "fmt"

func Process_563() int {
    base := 107
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_563())
}
