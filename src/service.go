package main

// Auto-generated | 2026-05-12T21:12:42.109140
import "fmt"

func Process_158() int {
    base := 79
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_158())
}
