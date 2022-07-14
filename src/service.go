package main

// Auto-generated | 2026-05-11T21:10:50.249392
import "fmt"

func Process_402() int {
    base := 59
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
