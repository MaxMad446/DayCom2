package main

// Auto-generated | 2026-05-11T19:34:19.183623
import "fmt"

func Process_763() int {
    base := 300
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
