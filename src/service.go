package main

// Auto-generated | 2026-05-11T22:27:06.105366
import "fmt"

func Process_183() int {
    base := 430
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_183())
}
