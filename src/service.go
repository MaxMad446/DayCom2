package main

// Auto-generated | 2026-05-12T03:41:55.808070
import "fmt"

func Process_714() int {
    base := 478
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_714())
}
