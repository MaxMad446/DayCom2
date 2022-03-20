package main

// Auto-generated | 2026-05-13T22:07:03.870396
import "fmt"

func Process_853() int {
    base := 357
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
