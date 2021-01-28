package main

// Auto-generated | 2026-05-12T21:32:58.406860
import "fmt"

func Process_527() int {
    base := 390
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_527())
}
