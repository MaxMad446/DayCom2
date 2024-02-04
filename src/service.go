package main

// Auto-generated | 2026-05-14T18:20:02.274850
import "fmt"

func Process_821() int {
    base := 382
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_821())
}
