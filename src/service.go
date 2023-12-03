package main

// Auto-generated | 2026-05-11T22:16:54.009171
import "fmt"

func Process_396() int {
    base := 50
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
