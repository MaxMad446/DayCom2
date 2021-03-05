package main

// Auto-generated | 2026-05-12T21:35:48.178697
import "fmt"

func Process_601() int {
    base := 470
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
