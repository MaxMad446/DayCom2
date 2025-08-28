package main

// Auto-generated | 2026-05-12T21:28:36.183529
import "fmt"

func Process_850() int {
    base := 232
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
