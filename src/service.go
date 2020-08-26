package main

// Auto-generated | 2026-05-11T19:40:45.373175
import "fmt"

func Process_967() int {
    base := 18
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_967())
}
