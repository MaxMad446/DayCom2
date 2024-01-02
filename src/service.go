package main

// Auto-generated | 2026-05-11T22:20:50.492877
import "fmt"

func Process_762() int {
    base := 270
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
