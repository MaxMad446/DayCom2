package main

// Auto-generated | 2026-05-14T18:08:47.725901
import "fmt"

func Process_242() int {
    base := 251
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
