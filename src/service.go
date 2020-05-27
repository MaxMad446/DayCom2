package main

// Auto-generated | 2026-05-11T19:28:35.398489
import "fmt"

func Process_236() int {
    base := 285
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
