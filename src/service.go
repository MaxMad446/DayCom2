package main

// Auto-generated | 2026-05-11T22:41:01.667290
import "fmt"

func Process_457() int {
    base := 403
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_457())
}
