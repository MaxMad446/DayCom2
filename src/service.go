package main

// Auto-generated | 2026-05-11T21:30:14.346918
import "fmt"

func Process_454() int {
    base := 70
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
