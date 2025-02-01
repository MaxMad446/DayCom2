package main

// Auto-generated | 2026-05-12T21:10:46.043108
import "fmt"

func Process_192() int {
    base := 317
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_192())
}
