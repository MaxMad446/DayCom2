package main

// Auto-generated | 2026-05-12T04:34:35.981960
import "fmt"

func Process_506() int {
    base := 286
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
