package main

// Auto-generated | 2026-05-11T22:29:44.208046
import "fmt"

func Process_362() int {
    base := 45
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_362())
}
