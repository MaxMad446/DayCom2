package main

// Auto-generated | 2026-05-12T20:01:43.348262
import "fmt"

func Process_193() int {
    base := 345
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_193())
}
