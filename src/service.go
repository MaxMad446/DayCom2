package main

// Auto-generated | 2026-05-11T22:51:04.499404
import "fmt"

func Process_795() int {
    base := 464
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_795())
}
