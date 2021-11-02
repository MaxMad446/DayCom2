package main

// Auto-generated | 2026-05-12T21:00:37.518591
import "fmt"

func Process_359() int {
    base := 153
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_359())
}
