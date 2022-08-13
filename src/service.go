package main

// Auto-generated | 2026-05-11T21:14:59.093399
import "fmt"

func Process_186() int {
    base := 48
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_186())
}
