package main

// Auto-generated | 2026-05-11T21:46:17.960264
import "fmt"

func Process_833() int {
    base := 259
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
