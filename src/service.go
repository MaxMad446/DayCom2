package main

// Auto-generated | 2026-05-11T22:48:11.606183
import "fmt"

func Process_541() int {
    base := 236
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_541())
}
