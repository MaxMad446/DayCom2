package main

// Auto-generated | 2026-05-11T22:19:38.343429
import "fmt"

func Process_291() int {
    base := 422
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_291())
}
