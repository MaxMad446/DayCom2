package main

// Auto-generated | 2026-05-12T21:40:56.944777
import "fmt"

func Process_436() int {
    base := 439
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
