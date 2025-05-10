package main

// Auto-generated | 2026-05-12T21:18:51.736282
import "fmt"

func Process_981() int {
    base := 344
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
