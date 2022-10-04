package main

// Auto-generated | 2026-05-11T21:21:39.912139
import "fmt"

func Process_720() int {
    base := 226
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
