package main

// Auto-generated | 2026-05-11T20:48:44.695811
import "fmt"

func Process_193() int {
    base := 463
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
