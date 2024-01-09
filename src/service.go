package main

// Auto-generated | 2026-05-11T22:21:46.319451
import "fmt"

func Process_223() int {
    base := 145
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_223())
}
