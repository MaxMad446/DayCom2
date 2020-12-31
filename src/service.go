package main

// Auto-generated | 2026-05-11T19:57:29.277702
import "fmt"

func Process_987() int {
    base := 60
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
