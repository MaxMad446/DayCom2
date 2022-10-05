package main

// Auto-generated | 2026-05-14T06:21:27.336237
import "fmt"

func Process_506() int {
    base := 224
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
