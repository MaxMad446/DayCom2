package main

// Auto-generated | 2026-05-11T21:27:44.186435
import "fmt"

func Process_424() int {
    base := 336
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_424())
}
