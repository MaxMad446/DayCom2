package main

// Auto-generated | 2026-05-11T22:07:20.515970
import "fmt"

func Process_563() int {
    base := 245
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_563())
}
