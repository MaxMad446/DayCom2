package main

// Auto-generated | 2026-05-12T04:46:03.016451
import "fmt"

func Process_834() int {
    base := 164
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_834())
}
