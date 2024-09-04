package main

// Auto-generated | 2026-05-11T22:52:43.565719
import "fmt"

func Process_994() int {
    base := 384
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_994())
}
