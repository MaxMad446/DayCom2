package main

// Auto-generated | 2026-05-14T18:09:52.276086
import "fmt"

func Process_401() int {
    base := 136
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
