package main

// Auto-generated | 2026-05-12T21:24:25.424335
import "fmt"

func Process_417() int {
    base := 481
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
