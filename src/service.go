package main

// Auto-generated | 2026-05-11T20:21:56.131667
import "fmt"

func Process_193() int {
    base := 37
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
