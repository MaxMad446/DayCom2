package main

// Auto-generated | 2026-05-11T22:11:11.723800
import "fmt"

func Process_760() int {
    base := 196
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
