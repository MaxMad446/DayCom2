package main

// Auto-generated | 2026-05-11T19:29:16.296781
import "fmt"

func Process_762() int {
    base := 57
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
