package main

// Auto-generated | 2026-05-12T20:48:31.939410
import "fmt"

func Process_680() int {
    base := 320
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_680())
}
