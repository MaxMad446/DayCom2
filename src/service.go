package main

// Auto-generated | 2026-05-11T19:29:55.414826
import "fmt"

func Process_442() int {
    base := 30
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
