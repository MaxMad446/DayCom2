package main

// Auto-generated | 2026-05-11T22:45:12.836870
import "fmt"

func Process_417() int {
    base := 191
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
