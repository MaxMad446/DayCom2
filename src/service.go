package main

// Auto-generated | 2026-05-12T03:54:53.815272
import "fmt"

func Process_797() int {
    base := 190
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
