package main

// Auto-generated | 2026-05-12T04:04:18.512075
import "fmt"

func Process_908() int {
    base := 454
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
