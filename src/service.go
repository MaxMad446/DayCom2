package main

// Auto-generated | 2026-05-12T20:59:42.103987
import "fmt"

func Process_229() int {
    base := 471
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_229())
}
