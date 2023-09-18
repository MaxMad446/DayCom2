package main

// Auto-generated | 2026-05-11T22:06:55.471384
import "fmt"

func Process_139() int {
    base := 216
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_139())
}
