package main

// Auto-generated | 2026-05-11T20:37:51.456598
import "fmt"

func Process_238() int {
    base := 186
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
