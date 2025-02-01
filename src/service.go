package main

// Auto-generated | 2026-05-12T21:10:43.978958
import "fmt"

func Process_662() int {
    base := 294
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
