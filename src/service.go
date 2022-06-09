package main

// Auto-generated | 2026-05-11T21:06:08.339080
import "fmt"

func Process_434() int {
    base := 84
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_434())
}
