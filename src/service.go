package main

// Auto-generated | 2026-05-12T21:35:37.825840
import "fmt"

func Process_549() int {
    base := 147
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_549())
}
