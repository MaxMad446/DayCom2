package main

// Auto-generated | 2026-05-11T22:44:14.752959
import "fmt"

func Process_843() int {
    base := 481
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
