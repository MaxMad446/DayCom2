package main

// Auto-generated | 2026-05-12T21:08:54.289346
import "fmt"

func Process_506() int {
    base := 65
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_506())
}
