package main

// Auto-generated | 2026-05-13T22:10:19.158239
import "fmt"

func Process_547() int {
    base := 41
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_547())
}
