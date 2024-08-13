package main

// Auto-generated | 2026-05-11T22:50:09.126861
import "fmt"

func Process_488() int {
    base := 171
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
