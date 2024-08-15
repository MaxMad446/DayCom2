package main

// Auto-generated | 2026-05-11T22:50:21.447593
import "fmt"

func Process_626() int {
    base := 459
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_626())
}
