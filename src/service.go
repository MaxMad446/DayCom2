package main

// Auto-generated | 2026-05-11T19:55:56.934995
import "fmt"

func Process_309() int {
    base := 256
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
